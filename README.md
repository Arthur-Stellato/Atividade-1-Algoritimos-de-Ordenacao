# Quick Sort — Atividade Avaliativa 1 (Algoritmos de Ordenação)

Trabalho da disciplina de Estruturas de Dados, com o algoritmo **Quick Sort**. Contém a implementação em C++ e um site de apresentação com explicação do algoritmo, análise de complexidade, comparação com o Bubble Sort e uma demonstração interativa com debugger de passos.

## Estrutura do repositório

```
.
├── quicksort.cpp   # Implementação do algoritmo em C++
├── index.html      # Site de apresentação e visualizador interativo
└── README.md
```

## Como rodar o código C++

```bash
g++ -std=c++17 -o quicksort quicksort.cpp
./quicksort
```

Saída esperada:

```
Array ordenado: 1 5 7 8 9 10
```

## Como abrir o site

O `index.html` funciona sozinho, sem servidor e sem dependências externas — basta abrir no navegador.

Para publicar online (recomendado, pra apresentar com um link):

1. Faça o commit dos arquivos neste repositório.
2. Vá em **Settings → Pages**.
3. Em **Branch**, selecione `main` e a pasta `/ (root)`.
4. Salve — o GitHub gera um link parecido com `https://SEU-USUARIO.github.io/NOME-DO-REPO/`.

## Sobre o algoritmo

O Quick Sort é um algoritmo de ordenação por divisão e conquista: escolhe um elemento como pivô, particiona o array em torno dele (menores à esquerda, maiores à direita) e repete o processo recursivamente em cada metade. Esta implementação usa o **esquema de partição de Lomuto**, com o último elemento da faixa como pivô.

| Métrica | Valor |
|---|---|
| Melhor caso | O(n log n) |
| Caso médio | O(n log n) |
| Pior caso | O(n²) — ocorre com arrays já ordenados, já que o pivô é o último elemento |
| Espaço extra | O(log n) — pilha de recursão |
| Estável | Não |
| In-place | Sim |

A explicação completa (passo a passo, curiosidades e comparação com o Bubble Sort) está no site (`index.html`).

## Equipe

- (preencher com os nomes da equipe)

## Atividade

Atividade Avaliativa 1 — Algoritmos de Ordenação — UTFPR.
