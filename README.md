# Matriz-Hash
Ao compilar esse código, uma matriz de 1000 valores int por 1000 valores int é criada em um arquivo de texto pela função create(). O código então pede o input do usúario para obter as coordenadas de linha e coluna que a função Faz 

# Letra A
Na letra A, a função que faz a lista recebe apenas o tamanho como input e cria duas listas aleatórias. Como as listas vão ser partidas ao meio e combinadas, e o tamanho é um valor inteiro, no caso de tamanhos impares a primeira metade sempre será arredondada para baixo, por exemplo listas com 7 blocos manterão os três primeiros iguais e trocarão os 4 ultimos. A função "ParteLiga" forma duas listas auxiliares, que por um laço de repetição de 0 à metade dotamanho da lista enfileira os indices da lista original, mas dali pra frente enfilera os indices da outra lista num outro laço de repetição.

# Letra B
A função "makeb" da letra b cria e mostra uma Fila aleatório de 10 posições, e a função "Fazindex" recebe essa Fila e calcula um index associado a ela, nesse caso em específico o index escolhido foi a soma de entre os todos os valores da Pilha, por fim o mostrando na tela como resultado.

# Letra C
A letra C relazia o mesmo começo da B, mas para três listas diferentes. Após as três listas serem formadas e seu index obtido, um vetor de inteiros obtem o indice e se organiza por bubble sort do maior para o menor. Por fim, os indexes de cada fila são imprimidos em Ordem por meio de uma séries de if's dentro de um for.

# Makefile

Como executar:

  make clean - Apaga a última compilação realizada contida na pasta build
  
  make - Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build
  
  make run - Executa o programa da pasta build após a realização da compilação
