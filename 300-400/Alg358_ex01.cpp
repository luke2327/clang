#include <stdio.h>

int main () {
    int i, j, k, L, m, n, p;
    int a[5][5] = { 0 };

    k = 0;
    L = 0;

    m = 4;
    n = 1;

    for (i = 0; i <=4; i++) {
        for (j = L; j != m + n; j += n) {
            k++;

            a[i][j] = k;
        }

        p = L;
        L = m;
        m = p;

        n *= -1;
    }

    for (i = 0; i <=4; i++) {
        for (j = 0; j <=4; j++) {
            printf("%3d", a[i][j]);
        }

        printf("\n");
    }
}