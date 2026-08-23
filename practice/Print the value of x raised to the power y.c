#include <stdio.h>
double power (int x, int y)
{
    double p;
    p =1.0 ; 
    if(y >=0){
        while(y--) 
            p *= x;}
    else{
        while (y++) 
            p /= x;}
    return p; 
}

int main( )
{
    int x,y; 
    printf("Enter x,y:\n");
    scanf("%d %d" ,&x,&y);
    printf("%d to power %d is %f\n", x,y,power(x,y));
}
