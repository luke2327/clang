#include <stdio.h>

int main () {
    int i;
    int a[10];
    int j = -1, max = 0;

    do {
        j++;

        scanf("%d", &a[j]);
    } while (j < 9);

    for (i = 0; i <= 9; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("%d", max);

    return 0;
}