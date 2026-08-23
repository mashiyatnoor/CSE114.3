#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main() {
    int m, x,binom;
    printf("m x");
    for (m=0; m<=10; m++) {
        printf("%4d",m);
    }
    printf("\n----------------------------------------\n");
    for (m = 0; m <= MAX; m++) {
        printf("%2d", m);
        binom = 1;
        for (x = 0; x <= m; x++) {
            if (m == 0 || x == 0) {
                printf("%4d", binom);
            }
            else {
                binom = binom * (m - x + 1) / x;
                printf("%4d", binom);
            }
        }
        printf("\n");
    }
    printf("----------------------------------------\n");
}
