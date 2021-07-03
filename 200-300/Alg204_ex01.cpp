#include <stdio.h>

int main () {
    int b, bb, c, mok, nmg, i, a[10];

    scanf("%d", &b);

    bb = b;

    c = -1;

    do {
        c++;

        mok = (int)(b / 2);
        nmg = b - mok * 2;

        a[c] = nmg;

        b = mok;
    }

    while (mok != 0);

    printf("%d\n", bb);

    for (i = c; i >= 0; i--) {
        printf("%d", a[i]);
    }
}