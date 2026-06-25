#include <stdio.h>
#include <string.h>
int main(){
    int a,length=0;
    char str[101];
    scanf("%d",&a);
    while (a--){
        scanf("%s", str);
        length=strlen(str);
        if(length<=10){
            printf("%s\n", str);
        }
        else{
            printf("%c%d%c\n", str[0], length-2, str[length-1]);
        }
    }
    return 0;
}
