#include <stdio.h>
#include <string.h>

int main() {
    char dados[5][4][100];
    char curso[] = "  ";
    char inStr[] = "  ";
    char response[2][100];
    int aux = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%s", dados[i][j]);
        }
    }

    scanf("%s", curso);
 
    for (int k = 0; k < 5; k++) {

        if ( strcmp (dados[k][2], curso) == 0 && (int) dados[k][3] > (int) response[1] ) {
            strcpy(response[0], dados[k][3]);
            strcpy(response[1], dados[k][0]);
            aux = 1;
        }

    }

    if (aux == 1)
        printf("CR = %s\nMatricula = %s", response[0], response[1]);
    else
        printf("Curso nao existente");

    return 0;
}