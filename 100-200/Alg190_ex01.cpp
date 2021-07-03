#include <stdio.h>

int main () {
    int a, hap, k, j;

    scanf("%d", &a);

    hap = 0;
    k = 2;
    while (1) {
        j = 2;
        while (k % j != 0)
            j++;
        
        if (k == j)
            hap += k;
        
        if (k < a)
            k++;
        else {
            printf("%d", hap);

            break;
        }
    }

    return 0;
}