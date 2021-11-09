#include <stdio.h>
#include <math.h>

int verificaToque(int x1, int y1, int x2, int y2) {
    int aux = 0;
    
    int d = sqrt( pow( ( x1 - x2 ), 2) + pow( ( y1 - y2 ), 2) );

    if ( d <= 3 ) {
        aux = 1;
    }

    return aux == 0? 0:1;
}

int main(){

    int x, y,
        n,
        x1, y1,
        aux = 0;

    scanf("%d", &x); 
    scanf("%d", &y);
    scanf("%d", &n);

    if ( n >= 3 ) {

        for (int i = 0; i < n; i++) {

            scanf("%d", &x1);
            scanf("%d", &y1);

            if ( verificaToque(x, y, x1, y1) == 1 )
                aux = 1;

        }

        aux == 0 ? printf("N") : printf("S"); 

    }

    return 0;
}
