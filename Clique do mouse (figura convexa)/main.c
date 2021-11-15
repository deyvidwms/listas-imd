#include <stdio.h>

int calcZ(int pontos[2], int pontosDepois[2], int cliques[3])
{
    float z = 0;
    z = (pontosDepois[0]-pontos[0])*(cliques[2]-pontos[1]) - (pontosDepois[1]-pontos[1])*(cliques[1]-pontos[0]);
    return z;
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

    // loop para cada clique...
    for (int k = 0; k < m; k++)
    {
        int aux = 0;
        // ... para cada segmento de reta
        for (int l = 0; l < n; l++) {

            if ( l == (n-1) ) {
                float z = calcZ(arrayPontos[l], arrayPontos[0], arrayCliques[k] );
                if ( z > 0 )
                    aux = 1;
            } else {
                float z = calcZ(arrayPontos[l], arrayPontos[l+1], arrayCliques[k] );
                if ( z > 0 )
                    aux = 1;
            }

        }

        if (aux==0)
            printf("%c\n", arrayCliques[k][0]);
    }


    return 0;
}