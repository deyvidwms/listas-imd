Uma nova startup foi selecionada para o processo de incubação no Inova Metrópole (Incubadora do IMD). Eles estão criando um software para auxiliar de engenheiros e arquitetos e precisam de pessoas que conheçam bem como desenvolver softwares de desenho vetorial.

Eles te chamaram para implementar uma parte essencial do projeto: a interface do usuário. Mas, nesse caso, a interface não é feita só de botões e menus. No caso, eles querem que você verifique se o usuário clicou sobre uma das linha de uma figura do desenho.

Uma primeira abordagem é verificar se o clique do mouse foi sobre um ponto de uma das retas que define o desenho. Porém, essa solução só funciona se o usuário clicar exatamente sobre a reta. Outra solução seria calcular a distância do ponto à reta. Porém, só isso pode não ser suficiente porque o clique pode ser sobre a continuação da reta, além dos pontos das extremidades.

É necessário saber quando o ponto se encontra além das extremidades da reta. Nesse caso, a distância do ponto para reta passa a ser a distância do ponto para uma de suas extremidades. Ou seja, primeiro testamos se o ponto está além das extremidades. Se estiver, calculamos a distância do ponto para uma das extremidades. Se não estiver além de nenhuma das extremidades, calculamos a distância do ponto a reta.

Uma forma de saber se um ponto se encontra além das extremidades de uma reta é usando o produto vetorial (dot product). Quando o produto vetorial de dois vetores é maior que 0 significa que o ângulo formado pelos vetores encontra-se entre -90 e 90 graus. Podemos, então, usar isso para saber se o ponto se encontra além de uma extremidade da seguinte forma: Considere os pontos A e B as extremidades da reta AB e o ponto C a ser testado. Se o produto vetorial entre os vetores AB e BC for maior que 0 é porque o ângulo α formado pelos vetores se encontra na faixa de -90 a 90 e, portanto, o ponto C está além da extremidade B, como ilustrado na figura abaixo. Da mesma forma, se o produto vetorial dos vetores BA e AC for maior que 0 é porque o ponto C está além da extremidade A. 

(IMAGEM)

O produto vetorial (dot product) de dois vetores (x1, y1) e (x2, y2) é definido pela fórmula:

​p = x_1.x_2 + y_1.y_2

Lembre-se que um vetor representado por dois pontos é definido pela diferença de suas coordenadas X e Y. Assim, o vetor AB é (x_b - x_a, y_b - y_a)​, o vetor BC é (x_c - x_b, y_c - y_b) e assim por diante.

Assim, se (x_b - x_a).(x_c - x_b) + (y_b - y_a).(y_c - y_b) > 0, então o ponto C se encontra depois da extremidade B. O mesmo pode ser feito para os vetores BA e AC.

Se um desses casos ocorrer, é necessário calcular a distância através da equação de distância. A equação abaixo ilustra o cálculo da distância entre os pontos A e B.

​d = raizquadrada( (x_a - x_b)^2 + (y_a - y_b)^2 )

Se nenhum dos casos ocorrer, é necessário calcular a distância do ponto C à reta AB. Para isso, iremos trabalhar com os vetores AB e AC. Calculamos o produto cruzado desses dois vetores e dividimos pelo módulo (tamanho) do primeiro. Ou seja, temos a seguinte equação:

d=(AB×AC)/∣AB∣​

Tecnicamente, o produto cruzado de dois vetores no 3D é um outro vetor 3D, perpendicular aos vetores iniciais. Como estamos no plano (2D), a única coordenada do produto cruzado que não será nula será a coordenada Z. Assim, podemos representar AB x AC pelo valor de Z, calculado pela expressão:

​z = x_1.y_2 - y_1.x_2

onde:
  x1 é a diferença das coordenadas X dos pontos A e B (x_a - x_b)

  y1 é a diferença das coordenadas Y dos pontos A e B (y_a - y_b)

  x2 é a diferença das coordenadas X dos pontos A e C (x_a - x_c)

  y2 é a diferença das coordenadas Y dos pontos A e C (y_a - y_c)

|AB| é o módulo do vetor AB, que indica seu tamanho. Podemos achar esse valor calculando a distância do ponto A ao ponto B, através da equação apresentada anteriormente.

Depois que d é calculado, verificamos se ele é menor que um valor limite L. Se for, é porque o clique do mouse foi próximo da reta. 

Para mostrar à equipe da startup que você sabe lidar com esse problema, escreva um programa que lê da entrada-padrão as coordenadas do clique do mouse e os pontos de um figura. A figura é definida por um valor inteiro N (sendo N >= 3) seguido de N linhas, cada uma contendo as coordenadas de um ponto da figura. Os pontos estarão em sequência, então você deve testar se o clique foi na reta definida do 1ª ao 2º pontos, depois do 2º ao 3º, depois do 3º ao 4º, e assim por diante até o último. Por fim, testa-se também do último ponto ao 1º.

A saída de seu programa deve ser S caso o clique tenha sido sobre uma das retas da figura ou N caso contrário.

Programar bem não é só resolver o problema, você precisa também mostrar à equipe da startup que sabe organizar seu código. Crie uma função para testar os pontos e usa-a no rotina main().

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