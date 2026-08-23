#include <stdio.h>
#include <stdlib.h>
#define LOOP 100
#define ACCURACY 0.0001
int main() {
    int n;
    float x, term, sum;
    printf("Input the value of x:\n");
    scanf("%f",&x);
    sum = 0;
    term = 1;
    for(n=1; n<=LOOP; n++) {
        sum = sum + term;
        if(term <= ACCURACY) {
            goto output;
        }
        term = term * x;
    }
    printf("Final value of n is not sufficient!");
output:
    printf("Sum = %f, No. of terms = %d\n", sum,n);
}
