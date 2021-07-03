#include <stdio.h>

int main () {
    int m, n, i, j;

    int grade[10], rank[10];

    m = -1;

    do {
        m++;
        scanf("%d", &grade[m]);
    } while (m < 9);

    n = 9;
    i = 0;

    while (i <= n) {
        rank[i] = 1;
        i++;
    }

    i = 0;

    while (i <= n) {
        j = 0;

        while (j <= n) {
            if (grade[i] < grade[j]) {
                rank[i]++;
            }

            j++;
        }

        i++;
    }

    for (int x = 0; x < 10; x++) {
        printf("%d\t", grade[x]);
    }

    printf("\n");

    for (int x = 0; x < 10; x++) {
        printf("%d\t", rank[x]);
    }
}