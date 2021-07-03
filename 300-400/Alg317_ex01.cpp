// merge sort

#include <stdio.h>
#include <stdlib.h>

void BB(int b[10], int c[20]);
void CC(int a[10], int c[20]);
void DD(int c[10]);

int i, j, k;

int main() {
    int a[10] = { 2, 3 ,5 ,6 ,7, 8, 10, 12, 0 };
    int b[10] = { 1, 3, 5, 6, 0 };
    int c[20];

    i = 0;
    j = 0;
    k = -1;

    while (1) {
        k++;
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;

            if (a[i] == 0) {
                BB(b, c);
            }
        }

        else if (a[i] == b[j]) {
            c[k] = a[i];

            i++;
            j++;

            if (a[i] == 0) {
                BB(b, c);
            } else if (b[j] == 0) {
                CC(a, c);
            }
        } else {
            c[k] = b[j];
            
            j++;

            if (b[j] == 0) {
                CC(a, c);
            }
        }
    }
}

void BB(int b[10], int c[20]) {
    if (b[j] == 0) {
        DD(c);
    }

    do {
        k++;

        c[k] = b[j];

        j++;
    } while (b[j] != 0);

    DD(c);
}

void CC(int a[10], int c[20]) {
    do {
        k++;

        c[k] = a[i];

        i++;
    } while (a[i] != 0);
}

void DD(int c[20]) {
    k++;

    c[k] = 0;

    for (i = 0; i < 20; i++) {
        if (c[i] == 0) {
            break;
        }

        printf("%d ", c[i]);
    }

    exit(0);
}