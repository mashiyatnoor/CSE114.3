#include <stdio.h>
int add(int x, int y){
    return x+y;
}
int multiply(int x, int y){
    return x*y;
}

int main(){
    int x,y;
    int sum, multiplication;
    printf("Enter the numbers:");
    scanf("%d %d" , &x ,&y);
    sum= add(x,y);
    multiplication = multiply(x,y);
    printf("%d\n" , sum);
    printf("%d\n", multiplication);

    return 0;
}
