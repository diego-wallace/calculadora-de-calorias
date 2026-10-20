# 🧮 Calculadora de Calorias em C

## 📌 Sobre o projeto

Este projeto foi desenvolvido como parte de um trabalho acadêmico com o objetivo de criar uma calculadora de calorias utilizando a linguagem C.
O programa permite que o usuário informe a quantidade de calorias consumidas ao longo do dia e registre atividades físicas realizadas, estimando o gasto calórico de acordo com o tipo de atividade e o tempo de execução.
Ao finalizar o registro das atividades, o programa apresenta um resultado com base nas calorias consumidas e no gasto calórico estimado.

## 🎯 Objetivo acadêmico

O principal objetivo deste projeto é consolidar os conhecimentos introdutórios de programação em C por meio do desenvolvimento de uma aplicação interativa que utiliza variáveis, estruturas condicionais, laços de repetição e operações matemáticas.
O projeto também contribui para o desenvolvimento do raciocínio lógico e para a prática de validação de dados fornecidos pelo usuário.
Projeto desenvolvido para fins acadêmicos, utilizando a linguagem C e o Visual Studio Code.

## ⚙️ Funcionalidades

- **Registro de calorias consumidas:** recebe a quantidade de calorias ingeridas pelo usuário durante o dia.
- **Seleção de atividades físicas:** disponibiliza cinco opções em um menu interativo:
  - Corrida;
  - Bicicleta;
  - Musculação;
  - Natação;
  - Calcular.
- **Registro da duração:** permite informar por quantos minutos cada atividade física foi realizada.
- **Adição de múltiplas atividades:** possibilita registrar diferentes atividades físicas antes de finalizar o cálculo.
- **Estimativa do gasto calórico:** calcula o gasto estimado com base na atividade selecionada e no tempo informado.
- **Resultado final:** apresenta o resultado do cálculo considerando as calorias consumidas, as estimativas de gasto calórico e a diferença entre calorias consumidas e gastas.

## 🛠️ Tecnologias utilizadas

- **Linguagem:** C
- **Editor de código:** Visual Studio Code (VS Code)
- **Compilador:** GCC (MinGW-w64, caso utilizado no ambiente de desenvolvimento)

## 💻 Como executar o projeto

### Pré-requisitos

Antes de executar o programa, é necessário ter:

- Visual Studio Code instalado;
- Um compilador C, como o GCC;
- Terminal configurado para executar comandos de compilação.

### 1. Clone o repositório

No terminal, execute:

```bash
git clone (https://github.com/diego-wallace/calculadora-de-calorias.git)
```

### 2. Acesse a pasta do projeto

```bash
cd calculadora-de-calorias
```

### 3. Compile o programa

Se o arquivo principal se chamar `main.c`, execute:

```bash
gcc main.c -o calculadora
```

No Windows, caso esteja utilizando o GCC do MinGW-w64, você pode gerar um executável com:

```bash
gcc main.c -o calculadora.exe
```

### 4. Execute o programa

No Windows:

```bash
.\calculadora.exe
```

Em ambientes Linux ou macOS:

```bash
./calculadora
```

**Observação:** os comandos podem variar conforme o sistema operacional, o compilador instalado e o nome do arquivo-fonte.

## 📚 Conceitos praticados

Durante o desenvolvimento deste projeto, foram trabalhados os seguintes fundamentos da linguagem C:

- **Variáveis:** armazenamento de dados, como calorias consumidas, duração das atividades e resultados dos cálculos.
- **Entrada e saída de dados:** utilização de `scanf()` para receber informações e `printf()` para apresentar mensagens e resultados.
- **Estruturas de repetição:** utilização de `do-while` e `while` para repetir menus e validar entradas.
- **Estruturas condicionais:** utilização de `if`, `else if` e `else` para verificar condições.
- **Estrutura de seleção `switch-case`:** implementação de um menu interativo para selecionar atividades físicas.
- **Operadores aritméticos e relacionais:** realização de cálculos e verificações lógicas.

## 🔄 Fluxo de funcionamento

1. O programa exibe uma mensagem de boas-vindas.
2. O usuário informa a quantidade de calorias consumidas.
3. O sistema apresenta o menu de atividades físicas.
4. O usuário seleciona uma atividade e informa sua duração em minutos.
5. O menu é exibido novamente, permitindo adicionar outras atividades.
6. Ao selecionar a opção de cálculo, o programa apresenta o resultado final.
7. O programa é encerrado.

## ⚠️ Limitações e observações

- Os valores de gasto calórico por minuto são estimativas utilizadas para fins acadêmicos e podem não corresponder ao gasto energético real de uma pessoa.
- O cálculo não deve ser utilizado como referência médica, nutricional ou para prescrição de atividades físicas.
- **Validação de entradas:** a versão inicial apresentou um problema ao receber caracteres não numéricos em campos destinados a números, podendo causar um loop infinito. Essa limitação deve ser verificada e corrigida na versão final do código.
