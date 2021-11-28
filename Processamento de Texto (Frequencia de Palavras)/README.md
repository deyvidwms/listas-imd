Nos últimos anos, os dados tem ganhado grande importância na indústria. Tal importância está associada a capacidade de transformar esses dados em informações úteis para as empresas gerando valor. Esses dados podem ser obtidos de diferentes fontes como sensores, relatórios, avaliações de usuários, fotos, vídeos, etc. Nesse contexto, você foi contratado por uma empresa responsável por elaborar solução em processamento de textos.

Algumas tarefas de processamento necessitam do conhecimento da frequência que cada palavra aparece no texto. Desse modo, você foi encarregado de desenvolver um programa para esse objetivo.

O programa deve receber como entrada uma palavra a ser determinada a sua frequência considerando 4 casas decimais. Em seguida, será apresentada uma quantidade indefinida de frases e a entrada de dados será encerrada com a frase "-1". O programa deve apresentar como saída a frequência da palavra em cada frase (quantidade de ocorrência dividido pela quantidade de palavras na frase) de acordo com a ordem de apresentação das frases. Desse modo, a primeira saída deve corresponder a frequência na primeira frase, a segunda corresponde a frequência na segunda frase e assim por diante. Além disso, deve ser apresentada a frequência de ocorrência da palavra considerando todas as frases.

Obs1.: cada frase não terá mais que 255 caracteres.

Obs2.: assuma que as palavras em cada frase são separadas por espaço ' ' sem pontuações.

​Observe o formato da entrada e saída padrão para ver como esses dados serão inseridos no programa e exibidos na saída padrão.

Exemplos:

Entrada
aranha
A aranha arranha a ra
-1

Saída
0.2000
0.2000

Entrada
A aranha arranha a ra
A ra arranha a aranha
Nem a aranha arranha a ra
Nem a ra arranha a aranha
-1

Saída
0.2000
0.2000
0.1667
0.1667
0.1818