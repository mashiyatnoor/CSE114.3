#include <stdio.h>
int find_largest(int n,int a[]){
    int largest=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    return largest;
}

int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int answer=find_largest(n,a);
    printf("Largest = %d", answer);
}
