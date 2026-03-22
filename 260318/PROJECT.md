# Dual GPU LLM Project

## Project Goal

이 프로젝트의 현재 목표는 다음과 같다.

- 로컬 환경에서 가능한 한 강한 모델을 사용한다
- 컨텍스트는 무리하게 키우지 않는다
- 긴 문서는 RAG로 처리한다
- 전문가용 질문에서 안정적인 품질을 우선한다

즉, `큰 모델 + 8K + RAG`가 현재 설계의 핵심이다.

## Final Architecture

### Main Runtime

- service: `ollama-main`
- image: `ollama/ollama`
- port: `11436`
- visible GPUs: `0,1`
- role: main model serving

### UI Layer

- service: `open-webui`
- image: `ghcr.io/open-webui/open-webui:main`
- port: `3000`
- role:
  - user chat interface
  - Knowledge management
  - document-based retrieval flow

## Current Model Decision

### Selected deployment model

- tag: `qwen2.5:32b-ko-rag-8k`
- base: `qwen2.5:32b-instruct-q3_K_M`
- context: `8192`
- role: default expert-use model

### Why this model

- `18GB` 전후의 usable VRAM 예산에서 가장 강한 축에 속한다
- `32B`급이라 전문가용 질문에서 모델 자체 추론력이 유리하다
- `8K`로 제한하면 현실적인 운영 가능성이 높다
- 긴 문서는 raw context 확대 대신 RAG로 보완할 수 있다

## Previous Designs And Why They Were Removed

### 1. Long-context 7B approach

실험 모델:

- `qwen2.5:7b-ko-32k`

의도:

- 긴 컨텍스트를 직접 활용

결론:

- 32K 자체는 기술적으로 동작했다
- 하지만 긴 문맥 후반으로 갈수록 정확도 저하가 먼저 나타났다
- 단순히 context를 키우는 것이 전문가용 품질 향상으로 이어지지 않았다

### 2. Translation pipeline approach

실험 구조:

- `qwen2.5:7b-translator`
- `qwen2.5:14b-en-12k`
- custom proxy
- `KO -> EN -> reasoning -> EN -> KO`

의도:

- 1070에는 번역
- 4070에는 메인 추론
- 두 GPU의 역할 분리

결론:

- 번역 과정에서 지시사항 손실이 반복됐다
- 기술 질문이 일반론으로 붕괴하는 경우가 있었다
- mixed-language contamination이 발생했다
- direct answering보다 전문가용 품질이 낮았다

따라서 제거한 것:

- translator container
- pipeline proxy container
- translator model setup
- proxy server code
- pipeline-specific Docker stack

## Why The Current Design Is Better

### 1. Expert-use quality matters more than raw context length

전문가용 용도에서는:

- 설계 판단
- 코드 리뷰
- 기술 설명
- 문서 기반 분석

의 품질이 중요하다.

이 경우 더 작은 모델에 긴 컨텍스트를 주는 것보다, 더 큰 모델에 적당한 컨텍스트를 주는 편이 유리할 가능성이 크다.

### 2. RAG is a better answer to long documents

긴 문서를 다루는 문제는:

- context를 키우는 방식
- 필요한 부분만 검색하는 방식

두 가지가 있는데, 이번 프로젝트에서는 두 번째가 더 실용적이었다.

이유:

- VRAM 효율이 좋다
- retrieval 품질을 따로 개선할 수 있다
- 메인 모델은 더 강한 모델을 유지할 수 있다

### 3. Simpler runtime is easier to maintain

지금 구조는:

- service 수가 적고
- 모델 흐름이 단순하고
- 디버깅 포인트가 줄어든다

즉, 품질뿐 아니라 운영 측면에서도 유리하다.

## RAG Workflow

현재 권장 흐름:

1. 문서를 Open WebUI Knowledge에 업로드
2. 문서를 chunk 단위로 색인
3. 질문 시 관련 chunk를 retrieval
4. retrieval된 텍스트만 메인 모델 입력에 포함
5. `qwen2.5:32b-ko-rag-8k`가 응답 생성

## Runtime Endpoints

- Open WebUI: `http://localhost:3000`
- Ollama API: `http://localhost:11436`

## Operations

초기 준비:

```powershell
.\setup-ai-stack.ps1
```

실행:

```powershell
docker compose -f compose.ai-stack.yml up -d
```

중지:

```powershell
docker compose -f compose.ai-stack.yml stop
```

종료:

```powershell
docker compose -f compose.ai-stack.yml down
```

## Files That Matter

- `compose.ai-stack.yml`
- `Modelfile.main`
- `setup-ai-stack.ps1`
- `README.md`
- `BENCHMARKS.md`

## Final Recommendation

이 프로젝트의 현재 기본 권장안은 다음과 같다.

- default model: `qwen2.5:32b-ko-rag-8k`
- default context: `8K`
- long-document handling: `RAG`
- default UI: `Open WebUI`
