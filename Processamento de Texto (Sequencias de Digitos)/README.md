Nos últimos anos, os dados tem ganhado grande importância na indústria. Tal importância está associada a capacidade de transformar esses dados em informações úteis para as empresas gerando valor. Esses dados podem ser obtidos de diferentes fontes como sensores, relatórios, avaliações de usuários, fotos, vídeos, etc. Nesse contexto, você foi contratado por uma empresa responsável por elaborar solução em processamento de textos.

O departamento de pesquisa da empresa necessita que você desenvolva uma aplicação para verificar a qualidade de um gerador de valores pseudoaleatórios. Ele acredita que a quantidade de sequências de dígitos presentes nos valores gerados serve como indicador da qualidade do gerador. Assim, você deve desenvolver um programa que auxilie a equipe de pesquisa no processo de verificação dessa hipótese.

O programa deve receber uma cadeia de caracteres composta somente de dígitos de 0 a 9 e deve contar a quantidade de sequências crescentes de 5 dígitos consecutivos presentes nessa cadeia de caracteres. Por exemplo, na cadeia "430123404" temos uma única sequência "01234" e para cadeia "45678345678" temos duas cadeias: "45678" e "34567".

A saída do programa consiste num único valor indicando a quantidade de sequências encontradas. Caso nenhuma sequência seja encontrada o programa deve apresentar como saída a seguinte mensagem "nenhuma sequencia encontrada".

Obs1.: assuma que a cadeia de caracteres de entrada não terá mais que 1000 caracteres.

Obs2.: assuma que não ocorre sobreposição entre as sequências, por exemplo, para cadeia "0123456789" temos duas sequências "01234" e "56789".

Exemplos
Entrada
430123404

Saída
1

Entrada
456780

Saída
1