Uma nova startup foi selecionada para o processo de incubação no Inova Metrópole (Incubadora do IMD). Eles estão criando um software para auxiliar de engenheiros e arquitetos e precisam de pessoas que conheçam bem como desenvolver softwares de desenho vetorial.

Eles te chamaram para implementar uma parte essencial do projeto: a interface do usuário. Mas, nesse caso, a interface não é feita só de botões e menus. No caso, eles querem que você verifique se o usuário clicou sobre uma das linha de uma figura do desenho.

Uma primeira abordagem é verificar se o clique do mouse foi sobre um ponto de uma das retas que define o desenho. Porém, essa solução só funciona se o usuário clicar exatamente sobre a reta... o que prejudica a experiência do usuário. O clique pode ter um certo nível de erro. Dessa forma, se o usuário clicar "próximo" a uma reta, será considerado como se ele tivesse clicado sobre a reta. É necessário, então, calcular a distância do ponto para a reta. Se a distância for menor que um valor limite (nível de erro), podemos dizer que o usuário clicou sobre a reta.

Uma possível solução para isso é usar vetores. Vetores são importantes em várias áreas da computação, incluindo jogos, IA, interfaces animadas na Web e até um simples clique de um mouse, como no nosso caso.

(AQUI TINHA UMA FIGURA)

Para calcular a distância de um ponto (C) a uma reta definida por dois outros pontos (A e B), iremos primeiramente definir dois vetores: o 1º de A a B (AB) e o 2º de A a C (AC). Depois calculamos o produto cruzado desses dois vetores (AB x AC) e dividimos pelo módulo (tamanho) do primeiro (|AB|). Ou seja, temos a seguinte equação:

d=(AB×AC)/∣AB∣​

Tecnicamente, o produto cruzado de dois vetores no 3D é um outro vetor 3D, perpendicular aos vetores iniciais. Como estamos no plano (2D), a única coordenada do produto cruzado que não será nula será a coordenada Z. Assim, podemos representar AB x AC pelo valor de Z, calculado pela expressão:

​z = x_1. y_2 - y_1.x_2

onde:
x_1 é a diferença das coordenadas X dos pontos A e B (x_a - x_b)
y_1 é a diferença das coordenadas Y dos pontos A e B (y_a - y_b)
x_2 é a diferença das coordenadas X dos pontos A e C (x_a - x_c)
y_2 é a diferença das coordenadas Y dos pontos A e C (y_a - y_c)

|AB| é o módulo do vetor AB, que indica seu tamanho. Podemos achar esse valor calculando a distância do ponto A ao ponto B, através da equação:

​|AB| = raizQuadrada( (x_a - x_b)^2 + (y_a - y_b)^2 )

Depois que d é calculado, verificamos se ele é menor que um valor limite L. Se for, é porque o clique do mouse foi próximo da reta. Para esse teste considere L = 3. Ou seja, se o clique do mouse estiver a 3 pixels de distância da reta, então será considerado como se clicasse sobre a reta.

Para mostrar à equipe da startup que você sabe lidar com esse problema, escreva um programa que lê da entrada-padrão as coordenadas do clique do mouse e os pontos de um figura. A figura é definida por um valor inteiro N (sendo N >= 3) seguido de N linhas, cada uma contendo as coordenadas de um ponto da figura. Os pontos estarão em sequência, então você deve testar se o clique foi na reta definida do 1ª ao 2º pontos, depois do 2º ao 3º, depois do 3º ao 4º, e assim por diante até o último. Por fim, testa-se também do último ponto ao 1º.

A saída de seu programa deve ser S caso o clique tenha sido sobre uma das retas da figura ou N caso contrário.

Programar bem não é só resolver o problema, você precisa também mostrar à equipe da startup que sabe organizar seu código. Crie funções para calcular o produto cruzado, para calcular a distância e para testar os pontos.

Obs1: Não precisa evitar problemas de precisão na equação da reta, pois você vai comparar com uma distância.

Obs2: Também não precisa criar casos especiais para lidar com a divisão por 0 porque isso só ocorrerá se |AB| = 0, ou seja se os pontos A e B forem coincidentes (não há reta entre A e B). O software da startup já eliminou esses casos.

Ex1:
Entrada
0 0
3
10 10
0 10
10 0

Saída
N

Ex2:
Entrada
3 3
4
0 0
0 10
10 10
10 0

Saída
N