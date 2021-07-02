#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    char a[11], munja[2];

    double d, e;
    double b = 0;

    int c = -1;
    
    scanf("%s", a);

    munja[1] = '\0';

    while (1) {
        c++;

        if (c <= 9) {
            munja[0] = a[c];

            d = atoi(munja);
            e = d * pow(2, 4 - c);
            b += e;
        } else {
            printf("%8.5f", b);

            break;
        }
    }

    
}