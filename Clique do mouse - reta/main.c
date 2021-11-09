#include <stdio.h>

int verificaToque(int cX, int cY, int x1, int y1, int x2, int y2) {
    int aux = 0;
    
    if ( x1 == x2 && cX == x1 ) {
        aux = 1;
    } else {

        double m = (double)(y2 - y1) / (double)(x2 - x1);

        if( ( cY - y1 ) == (int)( m * (cX - x1) ) )
            aux = 1;


    }

    return aux == 0? 0:1;
}

int main(){

    int x, y, // cordenadas do clique
        n, // qtd de linhas
        x1, y1, // primeiro ponto
        x2, y2, // ponto anterior
        x3, y3, // proximo ponto
        aux = 0;

    scanf("%d", &x); // cord x
    scanf("%d", &y); // cord y
    scanf("%d", &n); // qtd de linhas

    if ( n >= 3 ) {

        for (int i = 0; i < n; i++) {

            scanf("%d", &x3);
            scanf("%d", &y3);

            if ( i == 0 ) { // nao faz verificacao
                x1 = x3;
                y1 = y3;
                x2 = x3;
                y2 = y3;
            } else { // verifica ponto anterior e o proximo
                if ( verificaToque(x, y, x2, y2, x3, y3) == 1 ) {
                    aux = 1;
                    x2 = x3;
                    y2 = y3;
                } else {
                    x2 = x3;
                    y2 = y3;
                }   
            }

        }

        if ( verificaToque(x, y, x3, y3, x1, y1) == 1 ) // verifica do ultimo para o primeiro
            aux = 1;

        aux == 0 ? printf("N") : printf("S"); 

    }

    return 0;
}
