// insert sort

#include <stdio.h>

int main () {
    int j, i, k, key;
    int a[10];

    j = -1;

    do {
        j++;
        scanf("%d", &a[j]);
    } while (j < 9);

    for (i = 1; i <= 9; i++) {
        key = a[i];

        for (k = i - 1; k >= 0; k--) {
            if (a[k] > key) {
                a[k + 1] = a[k];
            } else {
                break;
            }
        }

        a[k + 1] = key;
    }

    for (i = 0; i <= 9; i++) {
        printf("%d ", a[i]);
    }
}