#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **alocarLinha(int linha, char **linhas)
{
    if (linhas == NULL)
        linhas = malloc(sizeof(char *));
    else
        linhas = realloc(linhas, sizeof(char *) * (linha + 1));
    return linhas;
}

void guardarLinha(int linha, char str[], char **linhas)
{
    if (linhas[linha] == NULL)
    {
        linhas[linha] = malloc(sizeof(char) * (strlen(str) + 1));
        strcpy(linhas[linha], "");
    }
    else
        linhas[linha] = realloc(linhas[linha], sizeof(char) * (strlen(linhas[linha]) + strlen(str) + 1));
    strcat(linhas[linha], str);
}

int main()
{
    char str[10];
    char **linhas = NULL;
    int l = 0, 
        s = 0, 
        j = 0;
    int alocar_proxima = 1;
    int indice_participante = 0;

    while (1)
    {
        fgets(str, 10, stdin);
        if (strcmp(str, "acabou\n") != 0)
        {
            if (alocar_proxima == 1)
            {
                linhas = alocarLinha(l, linhas);
                linhas[l] = NULL;
                alocar_proxima = 0;
            }
            guardarLinha(l, str, linhas);
            if (str[strlen(str) - 1] == '\n')
            {
                l++;
                alocar_proxima = 1;
            }
        }
        else
            break;
    }

    scanf("%d", &s);
    srand(s);

    int sorteados[l];

    for (int i = 0; i < l; i++)
        sorteados[i] = -1;

    while (j < l)
    {
        indice_participante = rand() % l;
        
        int aux = 1;

        int tam = (int) sizeof(sorteados)/sizeof(sorteados[0]);

        for (int k = 0; k < tam; k++) {
            if ( sorteados[k] == indice_participante ) {
                aux = 0;
            }
        }

        if ( aux ) {
            sorteados[j] = indice_participante;
            printf("%s", linhas[indice_participante]);
            j++;
        }

    }

    return 0;
}