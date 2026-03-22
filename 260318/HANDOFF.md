# Dual GPU LLM Handoff

## Current State

`260318`은 현재 `단일 32B 8K 메인 모델 + Open WebUI RAG` 구조로 정리된 로컬 LLM 프로젝트다.

현재 기본 구성:

- deployment model: `qwen2.5:32b-ko-rag-8k`
- base model: `qwen2.5:32b-instruct-q3_K_M`
- context: `8192`
- UI: `Open WebUI`
- document strategy: `RAG`

## Running Services

- `ollama-main`
- `open-webui`

## Ports

- `3000`: Open WebUI
- `11436`: Ollama API

## Why The Project Ended Up Here

이전에는 두 가지 방향을 실험했다.

### 1. 7B long-context

- `qwen2.5:7b-ko-32k`
- 긴 컨텍스트 자체는 가능했음
- 하지만 길이가 길어질수록 정확도가 먼저 흔들렸음

### 2. translation pipeline

- `7B translator -> 14B reasoning -> 7B translator`
- 전문가용 질문에서 direct answering보다 품질이 낮았음
- instruction loss, mixed output, task drift가 반복됨

결론적으로:

- 긴 문서는 raw context 확대보다 retrieval이 더 효율적이었고
- 전문가용 품질은 번역 파이프라인보다 큰 단일 모델이 더 나았다

그래서 현재 구조는:

- stronger model
- moderate context
- RAG for long documents

가 기본 전략이다.

## Files That Matter

- `compose.ai-stack.yml`
- `Modelfile.main`
- `setup-ai-stack.ps1`
- `README.md`
- `PROJECT.md`
- `BENCHMARKS.md`

## Resume Prompt

다음 세션에서는 이렇게 시작하면 된다.

`Read HANDOFF.md first and continue the 32B 8K + RAG version of the Dual GPU LLM project.`
