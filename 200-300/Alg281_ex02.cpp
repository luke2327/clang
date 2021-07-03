// bubble sort 2
#include <stdio.h>

int main () {
    int n, i, j, k;
    int data[10];

    n = -1;

    do {
        n++;
        scanf("%d", &data[n]);
    } while (n < 9);

    for (i = 1; i <= 9; i++) {
        for (j = 0; j <= 9 - i; j++) {
            if (data[j] > data[j + 1]) {
                k = data[j];
                data[j] = data[j + 1];
                data[j + 1] = k;
            }
        }
    }

    for (int x = 0; x < 10; x++) {
        printf("%d ", data[x]);
    }
}