#include <stdio.h>
int positive(int n, int a[]){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            sum+=a[i];
        }
    }
    return sum;
}

int main(){
    int n;
    printf("Enter how many numbers:");
    scanf("%d" ,&n);
    int a[n];
    printf("Enter the numbers:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum=positive(n, a);
    printf("The sum is = %d", sum);
}
