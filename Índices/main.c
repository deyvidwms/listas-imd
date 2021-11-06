#include <stdio.h>

int main() {

    int qtdAnos;
    float somatoria = 0.00;
    float resultado = 0.00;

    scanf("%d",&qtdAnos);

    float arrayMedidas[qtdAnos];
    int divisor = qtdAnos;

    for (int i = 0; i < qtdAnos; i++) {
        scanf("%e", &arrayMedidas[i] );
    }

    for (int j = 0; j < qtdAnos; j++) {
        if ( arrayMedidas[j] != -1 ) {
            somatoria += arrayMedidas[j];
        } else {
            divisor--;
        }
    }

    if ( divisor <= 0 ) {
        printf("A competicao nao possui dados historicos!");
    } else {
        resultado = somatoria / divisor;
        printf("%.2f", resultado);
    }

    return 0;
}
