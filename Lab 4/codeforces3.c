#include <stdio.h>
int main(){
    int n,p,v,t,count=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d %d %d",&p,&v,&t);
        if(p+v+t>=2){
            count=count+1;
        }
    }
    printf("%d",count); 
    return 0;
}
