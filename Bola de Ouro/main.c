#include <stdio.h>
#include <math.h>

int getTotal (int array[][2], int n) {
    int total = 0;

    for (int j = 0; j < n; j++)
        total += array[j][0];

    printf("Total: R$ %d\n", total);
    return total;
}


int showTotalAndRest(int array[][2], int n, int ganhador, int total ) {

    int bebidasPetiscos = 0;
    int aux = 0;

    // verifica a quantidade de pessoas que escolheram o jogador ganhador
    for (int i = 0; i < n; i++ ) {
        if ( array[i][1] == ganhador )
            aux++;
    }

    if ( aux == 0) {
    
        bebidasPetiscos = ceil( total * 0.1 );

        for (int k = 0; k < n; k++) {

            printf("Apostador %d: R$ %d\n", (k+1), (int) ( array[k][0] - (array[k][0] * 0.1) ) );

        }

        printf("Bebidas e petiscos: R$ %d", bebidasPetiscos );

    } else {

        bebidasPetiscos = (int) (total * 0.1);

        int resto = ( total - ( total * 0.1 ) ) + ( (total * 0.1) - (int) (total * 0.1) );

        int somaAux = 0;

        int jogadoresGanhadores[n];

        for (int k = 0; k < n; k++) {
            
            if ( array[k][1] == ganhador ) {
                somaAux += array[k][0];
            }

        }

        double restoSobreSoma = (double) resto / somaAux;

        double somaRestantePetiscos = 0;

        for (int l = 0; l < n; l++) {
            if ( array[l][1] == ganhador ) {
                somaRestantePetiscos += ( restoSobreSoma * array[l][0] ) - (int) ( restoSobreSoma * array[l][0] );
                printf("Apostador %d: R$ %d\n", (l+1), (int) ( restoSobreSoma * array[l][0] ) );
            }
        }

        printf("Bebidas e petiscos: R$ %.0f", (int) bebidasPetiscos + somaRestantePetiscos );
    }

    return 0;
}

int main() {

    int n;
    int auxA = 0, auxB = 0;
    int ganhador = 0;

    scanf("%d", &n);

    int array[n][2];

    for (int i = 0; i < n; i++) {

        scanf("%d", &auxA);
        scanf("%d", &auxB);

        array[i][0] = auxA;
        array[i][1] = auxB;

    }

    scanf("%d", &ganhador);

    int total = getTotal(array, n);

    showTotalAndRest(array, n, ganhador, total);

    return 0;
}