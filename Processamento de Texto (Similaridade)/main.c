#include <stdio.h>
#include <string.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    if (n > 1)
    {
        char arrayPalavras[n][9];

        for(int i = 0; i < n; i++) {
            scanf(" %s", arrayPalavras[i]);
        }

        printf("          "); // 10 espacos em branco

        for (int j = 0; j < n; j++)
        {
            int auxTam = 10 - (int)strlen(arrayPalavras[j]);
            for (int k = 0; k < auxTam; k++)
            {
                printf(" ");
            }
            printf("%s", arrayPalavras[j]);
        }

        printf("\n");

        for(int l = 0; l < n; l++) {

            
            printf("%s", arrayPalavras[l]);
            int auxTam = 10 - (int)strlen(arrayPalavras[l]);
            for (int m = 0; m < auxTam; m++)
            {
                printf(" ");
            }

            for (int o = 0; o < n; o++) {

                int qtd = strlen( arrayPalavras[l] );
                int qtdTotal = strlen( arrayPalavras[o] );

                if ( strcmp(arrayPalavras[l], arrayPalavras[o]) == 0 ) {
                    printf("       %d/%d", qtd, qtdTotal);
                } else {
                    int contLetIguais = 0;

                    int menorTam = qtdTotal > qtd ? qtd : qtdTotal;
                    int maiorTam = qtdTotal > qtd ? qtdTotal : qtd;

                    for (int p = 0; p < menorTam; p++) {
                        if ( arrayPalavras[l][p] == arrayPalavras[o][p] )
                            contLetIguais++;

                    }
                    printf("       %d/%d", contLetIguais, maiorTam);
                }

            }
            printf("\n");

        }
    }

    return 0;
}