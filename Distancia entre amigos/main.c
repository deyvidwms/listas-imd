#include <stdio.h>

int distancia( int array[], int n ){
    int distancia = 0,
        A = 0, 
        B = 0, 
        P = 0,
        D = 0;

    printf("N eh %d\n", n);

    for(int i = 0; i < n; i++){

        // aqui vai pegar a quantidade de andares para descer
        A = array[i];

        // aqui vai verific ar a distancia para cada apartamento
        for(int j = 0; j < n; j++){

            printf("i - %d; a[i] = %d.\n", i, array[i]);

            // verifica se o apartamento nao eh o atual
            if ( j != i ) {
                // aqui vai receber a distancia dos apartamento
                P = j - i;

                // aqui vai subir a quantidade de andares
                printf("j - %d; a[j] = %d.\n", j, array[j]);
                B = array[j];

                // aqui vai somar a distancia
                D = A + P + B;

                printf("A - %d;\nB - %d;\nC - %d;\n", A, P, B);

                printf("A distancia calculada foi: %d\n", D);

                // verificando se a distancia obtida eh a maior
                if ( D > distancia )
                    distancia = D;


            }

            printf("#---------------#\n");

        }

    }

    return distancia;
}

int main () {

    int n = 0,
        aux = 0;

    scanf("%d", &n);

    int array[n];

    for ( int i = 0; i < n; i++ ) {
        scanf("%d", &aux);
        array[i] = aux;
    }

    printf("%d", distancia(array, n) );

    return 0;
}