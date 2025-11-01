# Supertrunfo Países

Um jogo de cartas implementado em C, onde os jogadores competem comparando atributos de países.

---

## 📋 Descrição do Jogo

**Supertrunfo Países** é um jogo de cartas para 2 jogadores onde cada jogador recebe cartas aleatórias contendo informações sobre diferentes países. O objetivo é vencer comparando atributos específicos das cartas sorteadas.

### Como Funciona

1. **Distribuição**: Cada jogador recebe automaticamente uma carta aleatória de um baralho com 124 cartas
2. **Sorteio**: Uma carta aleatória do Jogador 1 é exibida na tela com todos os seus atributos
3. **Escolha**: O Jogador 1 escolhe qual atributo deseja usar para comparação
4. **Comparação**: O programa compara o atributo escolhido entre as cartas dos dois jogadores
5. **Resultado**: O jogador com o valor mais vantajoso no atributo escolhido vence a rodada

---

## 🎮 Atributos do Jogo

Cada carta possui os seguintes atributos que podem ser comparados:

| # | Atributo | Descrição | Critério de Vitória |
|---|----------|-----------|---------------------|
| 1 | **População** | Número de habitantes | ⬆️ Maior vence |
| 2 | **Área** | Área territorial em km² | ⬆️ Maior vence |
| 3 | **PIB** | Produto Interno Bruto em milhões | ⬆️ Maior vence |
| 4 | **Pontos Turísticos** | Quantidade de pontos turísticos | ⬆️ Maior vence |
| 5 | **Densidade Populacional** | Habitantes por km² (calculado) | ⬇️ **Menor vence** |
| 6 | **PIB Per Capita** | PIB por habitante em R$ (calculado) | ⬆️ Maior vence |

> ⚠️ **Atenção**: Na **Densidade Populacional**, o jogador com o **menor** valor vence (menor densidade é considerada melhor no jogo).

---

## 🚀 Como Compilar

### Pré-requisitos

- Compilador GCC instalado
- Arquivo `paises.h` no mesmo diretório do código fonte
- Sistema operacional: Linux, macOS ou Windows

### Compilação no Linux/macOS

```bash
gcc super_trunfo.c -o super_trunfo
```

### Compilação no Windows

```bash
gcc super_trunfo.c -o super_trunfo.exe
```

### Com arquivo de cabeçalho separado

Se você tiver o arquivo `paises.h` em outro diretório, especifique o caminho:

```bash
gcc super_trunfo.c -I /caminho/para/headers -o super_trunfo
```

---

## 🎯 Como Jogar

### Executar o Jogo

**Linux/macOS:**
```bash
./super_trunfo
```

**Windows:**
```bash
super_trunfo.exe
```

### Passo a Passo

1. **Início**: O jogo inicia automaticamente e sorteia 10 cartas para cada jogador

2. **Visualização da Carta**: Uma carta aleatória do Jogador 1 é exibida com informações:
   ```
   *** Carta Sorteada ***
   Código: BR-SP-001
   Nome: São Paulo
   População: 12325232
   Área: 1521.11 km²
   PIB: 699280.00 milhões
   Pontos Turísticos: 150
   Densidade Populacional: 8102 hab/km²
   PIB per capita: R$56734.89
   ```

3. **Escolha do Atributo**: Digite o número (1-6) correspondente ao atributo que deseja comparar:
   ```
   *** ATRIBUTOS ***
   1. População
   2. Área
   3. PIB
   4. Número de Pontos Turísticos
   5. Densidade Populacional
   6. PIB Per Capita
   
   Qual atributo deseja comparar? _
   ```

4. **Resultado**: O programa exibe a comparação e declara o vencedor:
   ```
   POPULAÇÃO
   Carta Jogador 1 - Cidade: São Paulo | População: 12325232
   Carta Jogador 2 - Cidade: Rio de Janeiro | População: 6748000
   
   Resultado: Jogador1 venceu!!!
   São Paulo - 12325232 habitantes
   ```

5. **Encerramento**: Pressione ENTER para finalizar o jogo

---

## 🔧 Estrutura do Código

### Arquivos Necessários

- **`super_trunfo.c`**: Arquivo principal com a lógica do jogo
- **`paises.h`**: Arquivo de cabeçalho contendo a estrutura `CartaPais` e o array `cartas_paises[]` com 124 cartas

### Funções Principais

| Função | Parâmetros | Retorno | Descrição |
|--------|-----------|---------|-----------|
| `dens_pop()` | `int pop, float area` | `float` | Calcula densidade populacional (pop/área) |
| `pib_pcapita()` | `float pib, int pop` | `float` | Calcula PIB per capita convertendo milhões para reais |
| `main()` | - | `int` | Função principal que controla o fluxo do jogo |

### Estrutura de Dados

```c
typedef struct {
    char codigo[20];
    char nome[100];
    int populacao;
    float area_km2;
    float pib_milhoes;
    int pontos_turisticos;
} CartaPais;
```

---

## 📝 Observações Técnicas

### Aleatoriedade

O jogo usa a função `srand(time(NULL))` para gerar números aleatórios baseados no tempo atual, garantindo que cada partida seja diferente.

### Limpeza de Tela

O comando `system("clear||cls")` funciona tanto em sistemas Unix/Linux (`clear`) quanto em Windows (`cls`).

### Formatação de Saída

- População: formato inteiro (`%d`)
- Área: formato com 2 casas decimais (`%.2f`)
- PIB: formato com 2 casas decimais em milhões
- Densidade: formato sem casas decimais (`%.0f`)
- PIB per capita: formato com 2 casas decimais em R$

---

## 🐛 Solução de Problemas

### Erro: "paises.h: No such file or directory"

**Solução**: Certifique-se de que o arquivo `paises.h` está no mesmo diretório do arquivo `super_trunfo.c`.

### Erro: "undefined reference to..."

**Solução**: Compile todos os arquivos necessários juntos ou verifique se o header está corretamente incluído.

### O jogo sempre mostra as mesmas cartas

**Problema**: Isso não deveria acontecer devido ao `srand(time(NULL))`. Se ocorrer, pode ser um problema com a implementação do `rand()` no sistema.

### Compilação falha no Windows

**Solução**: Instale o MinGW ou use o compilador GCC através do WSL (Windows Subsystem for Linux).

---

## 🎲 Estratégias de Jogo

- **População, PIB e Pontos Turísticos**: Geralmente, capitais e grandes cidades têm valores maiores
- **Área**: Cidades do interior ou estados inteiros tendem a ter áreas maiores
- **Densidade Populacional**: Lembre-se que **menor** vence! Escolha quando tiver cidades menos povoadas
- **PIB per capita**: Nem sempre a cidade mais rica tem o maior PIB per capita



---

**Divirta-se jogando Supertrunfo Países!**