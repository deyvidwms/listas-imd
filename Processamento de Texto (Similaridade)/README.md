Nos últimos anos, os dados tem ganhado grande importância na indústria. Tal importância está associada a capacidade de transformar esses dados em informações úteis para as empresas gerando valor. Esses dados podem ser obtidos de diferentes fontes como sensores, relatórios, avaliações de usuários, fotos, vídeos, etc. Nesse contexto, você foi contratado por uma empresa responsável por elaborar solução em processamento de textos.

Uma das suas primeiras atribuições é auxiliar a equipe de pesquisa que está com um problema de como determinar a similaridade entre as diferentes palavras presentes num texto. Assim, você deve desenvolver um programa que determine a similaridade entre cada par de palavras de um texto.

Para determinar a similaridade entre duas palavras, você optou por contar a quantidade de letras iguais considerando a ordem que elas aparecem. Considere os exemplos abaixo em que são destacadas as letras iguais nas mesmas posições:

[REi |ArArA  |corAgem|elabORE|presente]
[REal|AbAcAxi|aviAdor|melhORE|futuro  ]

Assim, temos os seguintes valores de similaridade:
    S(REI, REAL): 2
    S(ARARA, ABACAXI): 3
    S(CORAGEM, AVIADOR) = 1
    S(ELABORE, MELHORE) = 3
    S(PRESENTE, FUTURO) = 0

No entanto, após alguns testes, você percebeu que é difícil comparar esses valores entre diferentes pares de palavras. Assim, você optou por dividir esse valor pelo maior tamanho entre as duas palavras obtendo os seguintes valores:
    S(REI, REAL): 2/4
    S(ARARA, ABACAXI): 3/7
    S(CORAGEM, AVIADOR) = 1/7
    S(ELABORE, MELHORE) = 3/7
    S(PRESENTE, FUTURO) = 0/8

Para apresentar essa ideia a esquipe de pesquisa, você deve desenvolver um programa que recebe como entrada uma quantidade N (N>=2) representando a quantidade de palavras a serem comparadas. Em seguida são apresentas N palavras e o programa deve apresentar como saída as comparações de cada par de palavras organizadas numa matriz. Por exemplo, considere N = 3 e as palavras rei, real e metro. Assim, devemos obter a seguinte matriz:

[     ][rei][real][metro]
[rei  ][3/3][2/4 ][1/5  ]
[real ][2/4][4/4 ][1/5  ]
[metro][1/5][1/5 ][5/5  ]

Desse modo, o seu programa deve apresentar como saída uma matriz associando todos os pares de palavras da entrada. Ainda para melhorar a exibição dos dados, formate cada coluna para ocupar exatamente 10 caracteres cada uma e assuma que nenhuma palavra terá mais que 9 caracteres. Além disso, formate a primeira coluna para que as palavras iniciem mais a esquerda e as demais colunas iniciem mais a direita possível dentro do espaço de 10 caracteres.

Observe o formato da entrada e saída padrão para ver como esses dados serão inseridos no programa e exibidos na saída padrão. Observe que cada coluna ocupa exatamente 10 caracteres.

Exemplos:
Entrada
3
rei
real
metro

Saída
                 rei      real     metro
rei              3/3       2/4       1/5
real             2/4       4/4       1/5
metro            1/5       1/5       5/5

Entrada
2
iguais
iguais

Saída
              iguais    iguais
iguais           6/6       6/6
iguais           6/6       6/6
