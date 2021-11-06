#include <stdio.h>
#include <math.h>

int main()
{

    float tempo = 0.00, tempoAtleta = 0.00;
    int atletasAptos = 0, qtdSeries = 0;

    scanf("%f", &tempo);

    while(1) {

        scanf("%f", &tempoAtleta);

        if ( tempoAtleta == -1 ) {
            break;
        }

        if ( tempoAtleta <= tempo ) {
            atletasAptos++;
        }

    }

    qtdSeries = ceil( atletasAptos / 8.00 );    

    printf("%d %d", atletasAptos, qtdSeries );    

    return 0;
}