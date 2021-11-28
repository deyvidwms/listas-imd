#include <stdio.h>
#include <string.h>

int main()
{

    char texto[255],
        palavraBusca[255];

    char *pch;

    double totalPalavras = 0,
        totalRepeticao = 0;
    
    double arrayFrequenciaFrases[200];

    int index = 0;

    scanf(" %s", palavraBusca);

    do
    {

        scanf(" %[^\n]s", texto);

        if (strcmp(texto, "-1") == 0)
        {
            for (int i = 0; i < index; i++) {
                printf("%.4f\n", arrayFrequenciaFrases[i]);
            }

            printf("%.4f", ( totalRepeticao / totalPalavras ) );

            break;
        }
        else
        {
            pch = strtok(texto, " ");

            double contadorPalavras = 0,
                contadorPalavrasIguais = 0; 

            while (pch != NULL)
            {
                contadorPalavras++;

                if (strcmp(palavraBusca,pch) == 0 )
                    contadorPalavrasIguais++;
                
                pch = strtok(NULL, " ");
            }

            double frequencia = contadorPalavrasIguais / contadorPalavras;

            arrayFrequenciaFrases[index] = frequencia;

            totalPalavras += contadorPalavras;
            totalRepeticao += contadorPalavrasIguais;
        }

        index++;
    } while (1);

    return 0;
}