#include  <stdio.h>

int main() {

    int qtdItens = 0, qtdAux = 0;
    double valorTotal = 0.00, valTotAux = 0.00;

    while(1) {

        scanf("%d", &qtdAux);

        if ( qtdAux == -1 ) {
            printf("%d %.2lf",qtdItens,valorTotal);
            break;
        }

        scanf("%lf", &valTotAux);

        qtdItens += qtdAux;
        valorTotal += ( qtdAux * valTotAux );

    }

    return 0;
}