#include <stdio.h>
int main() {
    char id[20];
    int sum=0;
    printf("Enter:");
    scanf("%19s",&id);
    for(int i=0;id[i]!='\0';i++){
        sum=sum+(id[i]-'0');
    }
    printf("sum=%d",sum);

    return 0;
}
