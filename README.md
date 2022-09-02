# Matriz-Hash
Ao compilar esse código, uma matriz de 1000 valores int por 1000 valores int é criada em um arquivo de texto pela função "create". Os números aleatórios variam de 1 a 1000, mas para facilitar a leitura, eles são normalizados contendo quatro caractéres (Ex: 0007, 0359) e sendo separados por um espaço.  O código então pede o input do usúario para obter as coordenadas de linha e coluna que a função "getMatriz" utiliza para recolher uma matriz menor do arquivo txt.

A matriz menor é armazenada em um unordered map, com as coordenadas como chave e os int como conteúdo. Após esta ser feita, ela é imprimida e passada para a função "fazTransposta", que faz a transposta da matriz com um loop que faz um novo unordered map, com um for loop que troca as coordenadas da matriz original e forma a transposta. Por fim, a matriz resposta é formada por dois laços de repetição que comparam as coordenadas das duas matrizes, multiplica os valores e os soma, guardando o novo valor na matriz resposta.

 
# Makefile

Como executar:

  make clean - Apaga a última compilação realizada contida na pasta build
  
  make - Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build
  
  make run - Executa o programa da pasta build após a realização da compilação
