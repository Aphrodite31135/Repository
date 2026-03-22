# Dual GPU LLM

## Summary

`260318`은 현재 `단일 강한 메인 모델 + Open WebUI RAG` 구조로 정리된 로컬 LLM 프로젝트다.

현재 기본 구성:

- UI: `Open WebUI`
- main runtime: `Ollama`
- deployment model: `qwen2.5:32b-ko-rag-8k`
- base model: `qwen2.5:32b-instruct-q3_K_M`
- default context: `8K`
- long-document strategy: `RAG`

## Why This Is The Current Shape

이 프로젝트는 처음에 번역 파이프라인까지 포함한 듀얼 GPU 구조를 실험했다.

이전 실험 구조:

- `qwen2.5:7b-translator`
- `qwen2.5:14b-en-12k`
- custom translation proxy
- `KO -> EN -> reasoning -> EN -> KO`

하지만 전문가용 질문 비교에서 다음 문제가 반복됐다.

- 지시사항 손실
- 기술 질문의 일반론화
- 혼합 언어 출력
- 질문 의도 이탈

그래서 현재는 번역 파이프라인을 제거하고:

- 더 큰 단일 모델 사용
- 컨텍스트는 `8K`로 현실적으로 유지
- 긴 문서는 Open WebUI Knowledge 기반 `RAG`로 처리

구조로 정리했다.

## Current Services

### 1. ollama-main

- 역할: 메인 모델 실행
- 포트: `11436`
- GPU: `RTX 4070 + GTX 1070`

### 2. open-webui

- 역할: 사용자 UI 및 RAG 인터페이스
- 포트: `3000`
- 연결 방식: Ollama direct connection

## Current Model

### qwen2.5:32b-ko-rag-8k

- base: `qwen2.5:32b-instruct-q3_K_M`
- quantization: `Q3_K_M`
- runtime context: `8192`
- intended use:
  - 전문가용 질의
  - 기술 설명
  - 설계 판단
  - 코드 리뷰 보조
  - 문서 기반 질의응답 with RAG

## Access

- Open WebUI: `http://localhost:3000`
- Ollama API: `http://localhost:11436`

## Recommended Workflow

### General questions

1. Open WebUI 접속
2. `qwen2.5:32b-ko-rag-8k` 선택
3. 바로 질의

### Long documents

1. `Workspace -> Knowledge`로 이동
2. 문서 업로드
3. Knowledge 생성 또는 기존 Knowledge에 추가
4. 현재 채팅에 Knowledge 연결
5. 필요한 내용만 retrieval해서 질문

### Why RAG instead of larger raw context

- 긴 문서를 매번 통째로 넣는 것은 VRAM 효율이 나쁘다.
- 실제 실험에서도 긴 컨텍스트는 메모리보다 정확도 저하가 먼저 문제가 됐다.
- 따라서 현재 프로젝트는 `큰 모델 + 적당한 컨텍스트 + retrieval`을 기본 전략으로 둔다.

## Commands

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

상태 확인:

```powershell
docker compose -f compose.ai-stack.yml ps
```

## Files

- `compose.ai-stack.yml`
  - 현재 실행 스택 정의

- `Modelfile.main`
  - `qwen2.5:32b-ko-rag-8k` 생성 설정

- `setup-ai-stack.ps1`
  - 모델 pull 및 custom tag 생성

- `README.md`
  - 현재 상태와 사용법

- `PROJECT.md`
  - 설계 의도와 구조 변경 이유

- `BENCHMARKS.md`
  - 실험 결과 및 현재 구조 선택 근거
