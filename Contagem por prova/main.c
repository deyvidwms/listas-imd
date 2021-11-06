#include <stdio.h>

int main()
{

    int equipes = 0,
        corrida = 0,
        salto = 0,
        lancamento = 0,
        total = 0;
    int auxLoop = 1;

    char texto = ' ';

    scanf("%d", &equipes);

    for (int i = 0; i < equipes; i++)
    {

        texto = ' ';

        while(texto != 'F') {

            scanf("%c", &texto);

            if (texto == 'C') {
                corrida++;
                total++;
            } else if (texto == 'S') {
                salto++;
                total++;
            } else if (texto == 'L') {
                lancamento++;
                total++;
            }

        }

    }

    printf("%d %d %d %d", corrida, salto, lancamento, total);

    return 0;
}