#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {    
    char texto[100];
    int contador = 0,
        resposta = 0;

    scanf(" %s", texto);

    int tam = strlen(texto);

    for(int i = 0; i < tam; i++) {

        int atual = ( texto[i] - '0' );

        int proximo = ( texto[i+1] - '0' );

        if (atual+1 == proximo) {
            contador++;
            if (contador == 4) {
                resposta++;
                contador=0;
            }

        } else {
            contador=0;
        }

    }

    if (resposta==0)
        printf("nenhuma sequencia encontrada");
    else
        printf("%d",resposta);

    return 0;
}