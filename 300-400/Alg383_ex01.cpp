#include <stdio.h>

int main () {
    int k, c, i, j, f, n;
    int a[5][5] = { 0 };

    k = 0;
    c = 1;
    i = 0;
    j = -1;

    f = 5;

    while (1) {
        for (n = 1; n <= f; n++) {
            k++;
            j += c;

            a[i][j] = k;
        }

        f--;

        if (f <= 0) {
            break;
        }

        for (n = 1; n <= f; n++) {
            k++;
            i += c;

            a[i][j] = k;
        }

        c *= -1;
    }

    for (i = 0; i <=4; i++) {
        for (j = 0; j <=4; j++) {
            printf("%3d", a[i][j]);
        }

        printf("\n");
    }
}