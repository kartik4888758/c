#include <stdio.h>
int a;
int main(){
    int i;
    printf("enter a number to generate table for:");
    scanf("%d",&a);
    for(i=1;i<=10;++i){
        printf("%d * %d= %d\n",a,i,a*i);
    }
    return 0;
}