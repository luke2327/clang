// bubble sort 1
#include <stdio.h>

int main () {
    int n, i, j, k;
    int data[10];

    n = -1;

    do {
        n++;
        scanf("%d", &data[n]);
    } while (n < 9);

    i = 0;
    do {
        i++;
        j = -1;

        do {
            j++;

            if (data[j] > data[j + 1]) {
                k = data[j];
                
                data[j] = data[j + 1];
                data[j + 1] = k;
            }
        } while (j < 9 - i);
    } while (i < 9);

    for (int x = 0; x <=9; x++) {
        printf("%d ", data[x]);
    }
}