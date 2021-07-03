#define LIMIT 3
#include <stdio.h>

int main () {
    int i, j, k;
    int mat[LIMIT], lan[LIMIT], sum[LIMIT];

    i = -1;

    do {
        i++;
        scanf("%d %d", &mat[i], &lan[i]);

        sum[i] = mat[i] + lan[i];
    } while (i < LIMIT - 1);

    for (i = 0; i < LIMIT; i++) {
        if (sum[i] != 0) {
            k = 1;

            for (j = 0; j < LIMIT; j++) {
                if (sum[i] < sum[j]) {
                    k++;
                }
            }

            printf("%d %d %d %d %d\n", i + 1, mat[i], lan[i], sum[i], k);
        }
    }
}