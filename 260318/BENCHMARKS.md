# Dual GPU LLM Benchmarks

## Purpose

이 문서는 `260318` 프로젝트에서 지금까지의 핵심 실험 결과를 정리하고, 왜 현재 구조가 `32B 8K + RAG`가 되었는지 설명한다.

## 1. qwen2.5:7b Long-Context Experiment

### Configuration

- model: `qwen2.5:7b-ko-32k`
- quantization: `Q4_K_M`
- context: `32768`

### Observed memory

- model buffer: `4168.09 MiB`
- KV buffer: `1792.00 MiB`
- compute buffer: `382.01 MiB`
- rough GPU usage: `~6.3 GiB`

### Observed behavior

- 32K 자체는 실행 가능했다
- 그러나 긴 문맥 한계 부근에서는 정확도 저하가 먼저 나타났다
- truncation과 retrieval-like recall failure가 함께 보였다

### Takeaway

`긴 컨텍스트를 직접 쓰는 것`은 기술적으로 가능했지만, 전문가용 품질 관점에서는 충분히 만족스럽지 않았다.

따라서 이 실험은 `긴 문서는 retrieval로 다루는 편이 낫다`는 방향으로 이어졌다.

## 2. qwen2.5:14b Practical Context Experiment

### Configuration

- measured model: `qwen2.5:14b-en-16k`
- later practical target discussed: `12K`
- quantization: `Q4_K_M`

### Observed memory at 16K

- CUDA weights: `~5.5 GiB`
- CPU weights: `~2.5 GiB`
- CUDA KV: `~2.2 GiB`
- CPU KV: `~768 MiB`
- total footprint: `~12.6 GiB`

### Practical recommendation from the test

| Context | Recommendation |
|---|---|
| `4K ~ 8K` | very safe |
| `8K ~ 12K` | best balance |
| `12K ~ 16K` | possible but tighter |
| `>16K` | not recommended |

### Takeaway

`14B`는 실용적이었고 `12K`도 충분히 의미 있는 선택이었다.

하지만 이후 목표가 `전문가용 성능 우선`으로 이동하면서, 더 큰 모델을 쓰는 쪽이 우선순위가 됐다.

## 3. Expert Prompt Quality Comparison

### Compared paths

1. direct Korean answering
   - `14B @ 12K`

2. translation pipeline
   - `7B translator -> 14B reasoning -> 7B translator`

### Prompt types

- Docker / WSL2 / NVIDIA GPU troubleshooting
- Python concurrency bug review
- RAG architecture explanation
- Transformer context / KV cache summary

### Result summary

| Prompt type | Direct 14B | Translation pipeline | Result |
|---|---|---|---|
| Docker troubleshooting | weak but on-topic | generic and off-format | direct better |
| Python bug review | poor | worse | pipeline lost the task |
| RAG explanation | partial | unstable mixed output | direct much better |
| KV cache explanation | partial but usable | off-target | direct better |

### Repeated pipeline failures

- instruction loss
- technical detail flattening
- generic help-text behavior
- mixed-language contamination
- task drift

### Takeaway

전문가용 질문에서는 번역 파이프라인이 품질을 높이기보다 오히려 손실시키는 경우가 많았다.

즉, 이 구조는 유지 비용에 비해 얻는 이점이 낮았다.

## 4. Why The Old Pipeline Was Removed

실험 결과를 바탕으로 다음 요소를 제거했다.

- translator container
- pipeline proxy container
- translator model setup
- proxy server code
- pipeline-specific stack files

제거 이유:

- 전문가용 기준에서 direct path보다 낮은 품질
- 디버깅 포인트 증가
- 구조 복잡도 증가
- mixed output 문제

## 5. Why The Project Moved To 32B 8K + RAG

현재 구조 선택 논리는 다음과 같다.

### Stronger model first

전문가용 작업에서는 작은 모델의 긴 문맥보다 큰 모델의 추론력이 더 중요했다.

### 8K is realistic

`18GB` 전후 usable VRAM 가정에서:

- `32B Q3`는 강한 모델로서 현실적이다
- 하지만 긴 raw context까지 동시에 크게 가져가긴 어렵다

그래서 `8K`를 기본으로 잡는 것이 맞다.

### RAG solves the real long-document problem better

긴 문서 문제를 해결하고 싶다면:

- context를 억지로 늘리는 것보다
- retrieval로 필요한 chunk만 가져오는 편이

VRAM과 품질 모두에서 더 낫다.

## 6. Current Recommendation

현재 프로젝트의 최종 권장안:

- deployment model: `qwen2.5:32b-ko-rag-8k`
- base model: `qwen2.5:32b-instruct-q3_K_M`
- default context: `8192`
- long-document strategy: `RAG`

## Final Conclusion

이 프로젝트의 핵심 결론은 다음 한 줄로 정리할 수 있다.

`긴 문맥을 직접 크게 쓰는 것보다, 더 강한 32B 모델을 8K로 운용하고 긴 문서는 RAG로 처리하는 쪽이 이번 환경에서 더 실용적이었다.`
