#include <stdio.h>

int main () {
    int i, j, k;
    int a[5][5] = { 0 };

    k = 0;

    for (i = 0; i <= 4; i++) {
        for (j = i; j >= 0; j--) {
            k++;
            a[i][j] = k;
        }
    }

    for (i = 0; i <=4; i++) {
        for (j = 0; j <=4; j++) {
            printf("%3d", a[i][j]);
        }

        printf("\n");
    }
}