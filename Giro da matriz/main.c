#include <stdio.h>

int main() {

    int matriz[3][3],
        input = 0;

    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d",&input);
            matriz[i][j] = input;
        }
    }

    for (int k = 0; k < 3; k++) {
        for(int l = 2; l > -1; l--) {
            if ( l == 0)
                printf("%d",matriz[l][k]);
            else
                printf("%d ",matriz[l][k]);
        }
        printf("\n");
    }

    return 0;
}