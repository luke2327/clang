// algorithm 404p predict bank - 7
//
// 2021-07-05

#include <stdio.h>

int main () {
    int a[9][9] = { 0 };
    int q = 0,
        e = 0,
        c = 0,
        t = 0,
        j = 0;
    
    c = (int)(9 / 2 + 1);

    for (t = 0; t < 9; t++) {
        if (t < c) {
            e = 8 - t;
        } else {
            e = t;
        }

        for (j = 0; j <= e; j++) {
            q++;

            a[j][t] = q;
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int o = 0; o < 9; o++) {
            printf("%3d", a[i][o]);
        }

        printf("\n");
    }
}