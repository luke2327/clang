#include <stdio.h>

int main () {
    int b, mok, nmg, i;
    int a[100];

    scanf("%d", &b);

    int c = 0, d = -1;

    while (1) {
        c++;

        if (c <= b) {
            mok = (int)(b / c);
            nmg = b - c * mok;

            if(nmg == 0) {
                d++;

                a[d] = c;
            }
        } else {
            printf("%d \n", b);

            for (i = 0; i <= d; i++) {
                printf("%d ", a[i]);
            }

            break;
        }
    }
}