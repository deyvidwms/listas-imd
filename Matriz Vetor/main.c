#include <stdio.h>

int main() {

    int a = 0, 
        b = 0, 
        c = 0, 
        in = 0;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 5; j++) {

            scanf("%d", &in);

            if (i == 0)
                a += in;
            else if(i == 1)
                b += in;
            else
                c += in;

        }

    }

    printf("SL = [%d %d %d]", a,b,c);

}