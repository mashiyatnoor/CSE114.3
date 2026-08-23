#include <stdio.h>
int even_number(int n, int a[]){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            count+=1;
        }
    }
    return count;
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
    int answer=even_number(n, a);
    printf("The even numbers are = %d", answer);
}
