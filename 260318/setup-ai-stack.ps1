$ErrorActionPreference = "Stop"

$composeFile = "compose.ai-stack.yml"
$modelTag = "qwen2.5:32b-ko-rag-8k"

docker compose -f $composeFile up -d

docker compose -f $composeFile exec -T ollama-main ollama pull qwen2.5:32b-instruct-q3_K_M
docker compose -f $composeFile cp .\Modelfile.main ollama-main:/tmp/Modelfile.main
docker compose -f $composeFile exec -T ollama-main ollama create $modelTag -f /tmp/Modelfile.main

Write-Host ""
Write-Host "Open WebUI:  http://localhost:3000"
Write-Host "Ollama API:  http://localhost:11436"
Write-Host ""
Write-Host "Recommended model:"
Write-Host "  - $modelTag"
Write-Host ""
Write-Host "Recommended RAG workflow:"
Write-Host "  - Upload documents into Open WebUI Knowledge"
Write-Host "  - Attach the knowledge base to your chat or model"
Write-Host "  - Use the 8K model with retrieval instead of forcing long raw context"
