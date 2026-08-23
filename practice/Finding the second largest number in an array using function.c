#include <stdio.h>
int largest_number(int n,int a[]){
    int largest=a[0];
    int second=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            second=largest;
            largest=a[i];
        }
        else if(a[i]>second && a[i]!=largest){
            second=a[i];
        }
    }
    return second;
}

int main(){
    int n;
    printf("Enter how many numbers:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int answer=largest_number(n,a);
    printf("The largest number is is:%d",answer);
}
