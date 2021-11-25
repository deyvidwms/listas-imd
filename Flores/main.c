#include <stdio.h>

int main () {

    int matriz[5][3],
        input = 0,
        aux = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &input);
            matriz[i][j] = input;
        }
    }

    for (int k = 0; k < 5; k++) {
        if( matriz[k][1] > matriz[k][2] ) {
            printf("%d %d\n", matriz[k][0], (int)( matriz[k][1] - matriz[k][2] ) );
            aux = 1;
        }
    }

    if (aux==0)
        printf("Estoque Completo");

    return 0;
}