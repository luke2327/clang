#include <stdio.h>

int main () {
    int k, i, j, m;
    int a[99];

    k = 1;

    do {
        k++;
        a[k - 2] = k;
    } while (k < 100);

    i = -1,  j = 0;

    while (1) {
        i++;

        if (i > 98) {
            printf("%d", j);

            break;
        }

        if (a[i] == 0)
            continue;

        j++;
        m = i;

        while (1) {
            m += a[i];

            if (m > 98)
                break;
            
            a[m] = 0;
        }
    }
}