<h1 align="center"><b>Trabalho JOGO DA VIDA</b></h1>

<div align="center">
<!-- imagem -->

[![requirement](https://img.shields.io/badge/IDE-Visual%20Studio%20Code-informational)](https://code.visualstudio.com/docs/?dv=linux64_deb)
![Make](https://img.shields.io/badge/Compilacao-Make-orange)
![Linguagem](https://img.shields.io/badge/Linguagem-C%2B%2B-blue)
</div>

## 📌 Sumário
- [Introdução](#Introdução)
- [Objetivos](#Objetivos)
- [Problema apresentado](#Problema-apresentado)
- [Arquivos](#Arquivos)
- [Resolução do Problema](#Resolução-do-problema)
- [Resultados](#Resultados)
- [Conclusão](#Conclusão)
- [Compilação e execução](#Compilação-e-execução)
- [Contato](#Contato)

## ✒️ Introdução
<p align="justify">
    Nesse trabalho é analisado 3 diferentes funções que acham um valor miínimo e máximo em um vetor.<br>
    E cada uma dessas funções recebem 3 diferentes tipos de vetores:
    - Randomico
    - Crescente
    - Decrescente
    Com 4 tamanhos de entrada do vetor:
    - 1000
    - 10000
    - 100000
    - 500000
</p>

## Objetivos
<>
    <p align="justify"> 
    O principal objetivo é ter uma compreensão mais aprofundada nas diferentes implementações do algoritmo MinMax, e principalmente como elas se comportam em diferentes cenários de entrada.
</p>

## Problema apresentado
<strong><h4>Instruções:</h4></strong>

1. Implementação dos Algoritmos
    - Implementar, utilizando C/C++ e seguindo as melhores práticas de programação, os três algoritmos apresentados em sala: MinMax1, MinMax2 e MinMax3.

2. Avaliação dos Métodos
    - Avaliar os métodos utilizando diferentes tamanhos de entrada: 1.000, 10.000, 100.000 e 500.000 elementos do tipo inteiro. Esses conjuntos de dados devem ser gerados com valores variando entre 0 a 1000.
    - Cada algoritmo MinMax deve ser executado 10 vezes para cada tamanho de entrada. O tempo de execução obtido será a média dessas 10 execuções.
    - É importante ressaltar que o mesmo conjunto de dados inicial deve ser utilizado para todas as avaliações de um determinado tamanho N de valores. Além disso, considere utilizar os mesmos dados para compor suas variações ordenadas, crescente e decrescente.

3. Elaboração de Planilhas e Gráficos:
    - Com base nos tempos obtidos, elaborar uma planilha no Excel para analisar as relações de tempo de forma gráfica.
    - Recomenda-se categorizar os dados por classe, como por exemplo, todos os conjuntos de dados avaliados de 1000 entradas. Outra abordagem é detalhar as comparações por algoritmo quando os dados mudam, considerando tanto conjuntos de dados em ordem crescente como decrescnete.

4. Disponibilização do Código no Git:
    - Subir o código desenvolvio para um repositório Git
    - No arquivo README.md, detalhar os experimentos realizados e relacioná-los com os conceitos de análise assintótica discutidos em sala.

5. Pontos extras com gnuplot:
    - Os alunos que conseguirem utilizar o gnuplot para plotar os gráficos e disnponibilizarem o script utlilizado para geração junto com o código no Git receberão 2 pontos de crédito na disciplina.

<div align="center" style="display: flex; justify-content: center;">
    <img src="img/MinMax1.png" alt="MinMax1">
    <img src="img/MinMax2.png" alt="MinMax2">
    <img src="img/MInMax3.png" alt="MinMax3">
</div>

## 📄 Arquivos
- **Main.cpp:** É definido o tamanho da entrada do vetor, e logo depois é feito a randomização para preenche-lo.
Após isso, dentro de um laço while, é chamado as funções dos MinMax's, ordenando em ordem crescente com a função sort e em ordem decrescente com a função reverse. 
- **MinMax.hpp:** Criadas a função para cada um dos 3 MinMax's.
- **MinMax.cpp:** Feita a estruturação das funções criadas no arquivo MinMax.hpp.

## 🔨 Resolução do problema
<h3><b>Implementando em c++ e executando</b></h3>
    
- `Implementação`
    Segue a implementação de cada uma das funções em C++:
<div align="center" style="display: flex; justify-content: center;">
    <img src="img/MinMax1_implementation.png" alt="MinMax1">
    <img src="img/MinMax2_implementation.png" alt="MinMax2">
    <img src="img/MinMax3_implementation.png" alt="MinMax3">
</div>

    Foram feitas pequenas modificações, como receber o endereço de memória do arquivo de saída como parâmetro, e o uso da função clock para retornar o tempo de execução.



- `Execução`
    Ao executar o programa ele calcula o tempo gasto pelas funções 10 vezes, e isso é escrito direto em um arquivo .txt:
    <img src="img/arquivo_txt.png" align="center" style="display: flex; justify-content: center;">  

    E como são 4 tamanhos diferentes de entrada, também serão 4 arquivos desse, um para cada tamanho.


<h3><b> Gnuplot </b></h3>

- `Script Geral do gnuplot`
<img src="img/scrip_gnuplot.png" widht="200px">

Padrão do script utilizado para a criação dos gráficos, fazendo apenas pequenas alterações de um para outro, como por exemplo o tamanho da entrada ou título.


## 🎯 Resultados
Os resultados serão apresentados a seguir por meio de tabelas, nas quais mostra todos os tempos calculados e as médias, também já calculadas e também por meio de gráficos, nos quais é possível ter uma melhor visualização do que acontece e a partir de tal, fazer análises e chegar em algumas conclusões.

<h3><b>Tabelas Excel</b></h3>

- `Tabela MinMax1`
<img src="img/TabelaMinMax1.png" width="200px" alt="Tabela MinMax1">


- `Tabela MinMax2`
<img src="img/TabelaMinMax2.png" width="200px" alt="Tabela MinMax2">

- `Tabela MinMax3`
<img src="img/TabelaMinMax3.png" width="200px" alt="Tabela MinMax3">

-`Tabela Médias`
<img src="img/TabelaMedias.png" widht="200px" alt="Tabela Médias">

As tabelas foram criadas no aplicativo OnlyOffice no formato .ods


<h3><b> Gráficos </b></h3>
Para uma boa análise eu criei gráficos que contém os 3 MinMax's, em alguns cenários:

- `Todas as médias`
<img src="Graphics/grafico_MinMax.png" widht="200px">

    Este primeiro gráfico mostra uma média geral de todas as entradas e todos os tipos de ordenaçao do vetor.
    Nele é visível que no geral o MiMax3 é o algoritmo que tem o melhor desempenho, seguido do MinMax2 e por último o MinMax1. Contudo, em alguns pontos do gráfico o MinMax3 se apresenta sendo o pior, o que ainda veremos ser o caso quando temos vetor ordenado aleatoriamente.

- `Todas as médias com zoom nas entradas 1.000 e 10.000`
<img src="Graphics/grafico_MinMax_ate10000.png" widht="200px">

    O mesmo gráfico que o comentado a cima, porém com um maior zoom e foco nas entradas menores.
    Analisando-o, fica ainda mais evidente e confirma o comentário do gráfico a cima.

- `Médias com vetor randomico`
<img src="Graphics/grafico_rand.png">

    Aqui tem-se um gráfico considerando-se apenas o caso do vetor ordenado de forma aleatória.
    Como observado no primeiro gráfico, que o MinMax3 se comporta o pior em alguns casos, nesse gráfico conseguimos confirmar isso. Sendo ele o pior, enquanto o MinMax2 é o melhor desempenho e o MinMax1, o caso intermdiário.

- `Médias com vetor crescente `
<img src="Graphics/grafico_crescente.png" widht="200px">

    Com o vetor crescente, o comportamento esperado e os melhores desempenhos são respectivamente: MinMax3, MinMax2, MinMax1.

- `Médias com vetor decrescente`
<img src="Graphics/grafico_decrescente.png">
    Com o vetor descrescente, o comportamento segue bastante parecido com ele crescente, respeitando o resultado esperado e tenho uma diferença maior ainda entre os tempos. Respectivamente, os melhores desemoenhos se manteém: MinMax3, MinMax2, MinMax1





## ✔️ Conclusão
Ao final desse projeto, temos que o objetivo foi alcançado, uma vez que foram usados vários conceitos vistos anteriormente no curso, como manipulação de matrizes e de arquivos. Sobre o jogo em si, foi notável que é um jogo muito interessante e, apesar de suas regras simples, é capaz de gerar padrões surpreendentemente complexos e até mesmo simular fenômenos semelhantes aos observados na vida real, como a formação de estruturas estáveis, osciladores e espaçonaves.

## 👾 Compilação e execução
* Especificações da máquina em que o código foi rodado:
  * Processador AMD Ryzen7 5700u;
  * Sistema Operacional Ubuntu 22.04;
  * 12GB de RAM.
* | Comando         | Função                                                                             |                     
  | ----------------| -----------------------------------------------------------------------------------|
  | `make clean`    | Apaga a última compilação realizada contida na pasta build                           |
  | `make`          | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build |
  | `make run`      | Executa o programa da pasta build após a realização da compilação                     |