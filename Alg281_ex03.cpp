// bubble sort 3
#include <stdio.h>

int main () {
    int n, i, j, sw, cnt, k;
    int data[10];

    n = -1;

    do {
        n++;
        scanf("%d", &data[n]);
    } while (n < 9);

    cnt = 0;

    for (i = 1; i <= 9; i++) {
        sw = 0;
        
        for (j = 0; j <= (9 - i); j++) {
            if (data[j] > data[j + 1]) {
                k = data[j];
                data[j] = data[j + 1];
                data[j + 1] = k;

                cnt++;
                sw = 1;
            }
        }

        if (sw == 0) {
            break;
        }
    }

    printf("%d\n", cnt);
    for (int x = 0; x <= 9; x++) {
        printf("%d ", data[x]);
    }
}