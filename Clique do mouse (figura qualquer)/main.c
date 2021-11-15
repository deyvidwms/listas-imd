#include <stdio.h>

// pega o maior x
int getBiggerX (int n, int pontos[][2]) {
    int maior = 0;

    for (int i = 0; i < n; i++) {
        if ( pontos[i][0] > maior )
            maior = pontos[i][0];
    }

    return maior;
}

// faz o calculo do angulo
float calcZ(int pontos[2], int pontosDepois[2], int cliques[3]) {
    float z = (pontosDepois[0]-pontos[0])*(cliques[2]-pontos[1]) - (pontosDepois[1]-pontos[1])*(cliques[1]-pontos[0]);
    return z;
}

float verificaToque(int pontos[2],int pontosDepois[2],int cliques[3]) { 
    float p = (pontosDepois[0]-pontos[0])*(cliques[1]-pontosDepois[0])+(pontosDepois[1]-pontos[1])*(cliques[2]-pontosDepois[1]);
    if ( p < 0 )
        p = ( p * -1 );
    return p;
}

// verifica se as retas foram cruzadas
int verificaReta(int pontos[2], int pontosDepois[2], int cliques[3], int pontoMaximo[3]){ //Calcula se a reta CD se cruza com a AB

  float anguloA = calcZ(pontos, pontosDepois, cliques);
  float anguloB = calcZ(pontos, pontosDepois, pontoMaximo);

  int yMaxReta = pontos[1] > pontosDepois[1]? pontos[1]: pontosDepois[1];
  int yMinReta = pontos[1] > pontosDepois[1]? pontosDepois[1]: pontos[1];

  if(cliques[2] < yMaxReta && cliques[2] > yMinReta){
    if((anguloA > 0 && anguloB < 0) || (anguloA < 0 && anguloB > 0)){
      return 1;
    }
  }
  
  return 0;

}

int main()
{

    int m = 0,
        n = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    int arrayPontos[n][2],
        auxPA = 0,
        auxPB = 0;

    char auxCA;
    int arrayCliques[m][3],
        auxCB = 0,
        auxCC = 0;

    // pega os valores de x e y das coordenadas
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &auxPA);
        scanf("%d", &auxPB);

        arrayPontos[i][0] = auxPA;
        arrayPontos[i][1] = auxPB;
    }

    // pega o nome dos pontos e suas coordenadas
    for (int j = 0; j < m; j++)
    {

        scanf(" %c", &auxCA);
        scanf("%d", &auxCB);
        scanf("%d", &auxCC);

        arrayCliques[j][0] = auxCA;
        arrayCliques[j][1] = auxCB;
        arrayCliques[j][2] = auxCC;
    }

    int maxValueX = getBiggerX(n, arrayPontos);

    // loop para cada clique...
    for (int k = 0; k < m; k++)
    {
        int qtdLinhasToque = 0;
        // ... para cada segmento de reta
        for (int l = 0; l < n; l++) {

            int pontoMaximo[3] = { 'M', maxValueX, arrayCliques[k][2] };

            if ( l == (n-1) ) {
                qtdLinhasToque += verificaReta(arrayPontos[l], arrayPontos[0], arrayCliques[k], pontoMaximo);
            } else {
                qtdLinhasToque += verificaReta(arrayPontos[l], arrayPontos[l+1], arrayCliques[k], pontoMaximo);
            }

        }

        if (qtdLinhasToque%2==1)
            printf("%c\n", arrayCliques[k][0]);

    }

    return 0;
}