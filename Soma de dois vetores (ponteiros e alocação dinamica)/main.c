#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int *vetorA;
    int *vetorB;
    int *vetorC;

    char texto[255];
    char texto2[255];
    char *pch;
    char *pch2;

    fgets(texto, 255, stdin);
    pch = strtok(texto, " ");

    int i = 0;
    vetorA = malloc( sizeof(int) * i );

    while (pch != NULL)
    {
        vetorA = realloc(vetorA, sizeof(int) * (i+1) );

        vetorA[i] = atoi(pch);
        pch = strtok(NULL, " ");

        i++;
    }


    fgets(texto2, 255, stdin);
    pch2 = strtok(texto2, " ");

    int j = 0;
    vetorB = malloc( sizeof(int) * j );

    while (pch2 != NULL)
    {
        vetorB = realloc(vetorB, sizeof(int) * (j+1) );

        vetorB[j] = atoi(pch2);
        pch2 = strtok(NULL, " ");

        j++;
    }


    if ( i != j ) {
        printf("Vetores de tamanhos diferentes!");
        return 0;
    } else {
        vetorC = malloc( sizeof(int) * i );

        for ( int k = 0; k < i; k++)
            vetorC[k] = vetorA[k] + vetorB[k];
        
    }

    for (int l = 0; l < i; l++)
        printf("%d ", vetorC[l]);

    return 0;
}