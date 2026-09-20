<h1 align="center">Quick Sort</h1>
<p align="center"><strong>Atividade Avaliativa 1 — Algoritmos de Ordenação</strong><br>Estratégias de Programação · UTFPR</p>

<p align="center">
  <img alt="C++" src="https://img.shields.io/badge/C%2B%2B-17-00599C?logo=cplusplus&logoColor=white">
  <img alt="HTML5" src="https://img.shields.io/badge/HTML5-E34F26?logo=html5&logoColor=white">
  <img alt="Status" src="https://img.shields.io/badge/status-finalizado-2ea44f">
</p>

Trabalho da disciplina de Estrutura de Dados, com o algoritmo **Quick Sort**. Contém a implementação em C++ e um site que funciona como material de apresentação (slides) e como debugger visual interativo do algoritmo.

🔗 **Apresentação online:** *[(Link da Apresentação Online)](https://arthur-stellato.github.io/Atividade-1-Algoritimos-de-Ordenacao/)*

## Sumário

- [Estrutura do repositório](#estrutura-do-repositório)
- [Como rodar o código C++](#como-rodar-o-código-c)
- [Como abrir e navegar no site](#como-abrir-e-navegar-no-site)
- [Sobre o algoritmo](#sobre-o-algoritmo)
- [Roteiro de apresentação](#roteiro-de-apresentação)
- [Equipe](#equipe)

---

## Estrutura do repositório

```
.
├── quicksort.cpp         # Implementação do algoritmo em C++
├── index.html            # Site de apresentação (deck de slides) e debugger interativo
├── ROTEIRO.md            # Roteiro da apresentação, dividido por slide e por integrante
├── explicacao-codigo.md  # Explicação linha a linha do código, para consulta durante a arguição
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

## Como abrir e navegar no site

O `index.html` é o material usado na apresentação em sala — um deck de 11 slides, cobrindo desde o conceito até a demonstração ao vivo. Funciona sozinho, direto no navegador, sem servidor e sem dependências externas.

- Naveguem entre os slides com as **setas do teclado (← →)**.
- No slide 9 (Demonstração ao vivo) tem um debugger interativo: gera um array (aleatório, melhor caso ou pior caso), roda passo a passo com o código C++ sincronizado ao lado, e permite alternar entre visualização em barras ou em blocos numerados.
- Detalhe: se o cursor estiver dentro do campo "Tamanho" nesse slide, a seta do teclado move o valor do campo em vez de trocar de slide — cliquem fora dele antes de navegar.

### Publicar no GitHub Pages (opcional, recomendado)

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

A explicação completa — passo a passo, exemplo prático, comparação com o Bubble Sort e a demonstração interativa — está no site (`index.html`). As referências bibliográficas, em formato ABNT, estão no último slide.

## Roteiro de apresentação

O arquivo `ROTEIRO.md` traz a fala sugerida para cada slide, já dividida entre os integrantes, com tempo estimado por parte (~10 minutos no total) e um guia de perguntas frequentes para a arguição.

## Equipe

- Arthur Stellato
- Conrado Lima
- João Melo
- Luis

## Atividade

Atividade Avaliativa 1 — Algoritmos de Ordenação — Estrutura de Dados — Professor Clayton Kossoski — UTFPR.