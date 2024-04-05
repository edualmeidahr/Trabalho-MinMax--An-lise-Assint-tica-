# Configurações do gráfico
set terminal png
set output 'grafico_crescente.png'

set title "Tamanho em Função do Tempo"
set xlabel "Tempo (segundos)"
set ylabel "Tamanho"

# Definindo as escalas
set xrange [0:0.003]  # Escala de tempo reduzida para mais zoom e precisão
set ytics add (1000, 10000, 100000, 500000)
set ytics font ",8"
set yrange [0:550000]

# Desenhar um retângulo branco como fundo
set object 1 rectangle from graph 0,0 to graph 1,1 behind fillcolor rgb "white" fillstyle solid noborder

# Definindo as linhas de plotagem
plot 'dados.csv' using 2:1 with lines title "MinMax 1" linewidth 2,\
     '' using 3:1 with lines title "MinMax 2" linewidth 2,\
     '' using 4:1 with lines title "MinMax 3" linewidth 2

