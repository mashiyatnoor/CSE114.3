#include <stdio.h>
int main() {
    int n, num1 = 0, num2 = 1, fib;

    printf("How many Fibonacci numbers do you want? ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", num1);

        fib = num1 + num2;
        num1 = num2;
        num2 = fib;
    }

    return 0;
}
