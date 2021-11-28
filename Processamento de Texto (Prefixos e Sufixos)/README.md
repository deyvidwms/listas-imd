Nos últimos anos, os dados tem ganhado grande importância na indústria. Tal importância está associada a capacidade de transformar esses dados em informações úteis para as empresas convertendo-os em valor. Esses dados podem ser obtidos de diferentes fontes como sensores, relatórios, avaliações de usuários, fotos, vídeos, etc. Nesse contexto, você foi contratado por uma empresa responsável pela elaboração de soluções em processamento de textos.

Sua primeira tarefa consiste em desenvolver um programa que efetue um processamento inicial no texto removendo partes de palavras que não serão úteis para as etapas seguintes. Para isso, você deve desenvolver um programa que remova os prefixos e sufixos de uma palavra, caso eles estejam presentes.

Por exemplo, considerando o prefixo "anti" e a palavra "antipatia", o resultado será "patia". Considerando o sufixo "ismo" e a palavra "realismo", o resultado será "real".

A entrada do programa será dividida em três partes consecutivas:

    1. Um conjunto de prefixos onde a primeira entrada será uma quantidade N (N >= 0) seguida por N palavras representando cada um dos prefixos formados por até 10 caracteres;

    2. De modo análogo, teremos um conjunto de sufixos especificado por uma quantidade M (M >= 0) seguido por M sufixos, cada um formado por até 10 caracteres;

    3. Por fim, será apresentada uma quantidade indefinida de palavras as quais devem ser processadas e exibidas na saída removendo os prefixos e sufixos apresentados caso eles estejam presentes na palavra. Cada palavra não terá mais que 100 caracteres e o final da entrada de dados será representado pela palavra "-1".

Obs1.: uma mesma palavra não pode apresentar mais que um prefixo e mais que um sufixo, no entanto, é possível que uma palavra apresente um prefixo e um sufixo simultaneamente.

Obs2.: se a remoção dos prefixos e sufixo resultar numa palavra sem caracteres então ela não deve ser exibida na saída.

Obs3.: consultem as funcionalidades presentes na biblioteca string.h. Porém, é possível desenvolver todo o programa sem o uso da biblioteca.

Observe o formato da entrada e saída padrão para ver como esses dados serão inseridos no programa e exibidos na saída padrão.

EXEMPLOS
Entrada:
2
contra
anti
1
ote
exemplo
simples
contendo
prefixos
contradizer
antivirus
sufixos
velhote
-1

Saída:
exemplo
simples
contendo
prefixos
dizer
virus
sufixos
velh

Entrada:
0
0
exemplo
complexo
contendo
prefixos
sufixos
prefixos
sufixos
contradizer
antivirus
velhote
antipatia
retroceder
tolerante
realismo
bronquite
justapor
gastrite
-1

Saída:
exemplo
complexo
contendo
prefixos
sufixos
prefixos
sufixos
contradizer
antivirus
velhote
antipatia
retroceder
tolerante
realismo
bronquite
justapor
gastrite