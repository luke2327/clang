#include <stdio.h>

int main () {
    int a, b ,big, small, mok, nmg, GCM, LCM;

    scanf("%d%d", &a, &b);

    if (a >= b) {
        big = a;
        small = b;
    } else {
        big = b;
        small = a;
    }

    while (1) {
        mok = big / small;
        nmg = big - small * mok;

        if (nmg == 0) {
            GCM = small;
            LCM = a * b / GCM;

            printf("%d %d", GCM, LCM);

            break;
        }

        big = small;
        small = nmg;
    }
}