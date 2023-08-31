#include <stdio.h>
int arr[3]={"a"," b ","c"};
void num()
{
    int i;

    printf("enter for index 0");
    scanf("%d",&arr[0]);
    printf("enter for index 1");
    scanf("%d",&arr[1]);
    printf("enter for index 2");
    scanf("%d",&arr[2]);
    for(i=0;i<3;++i)
    {
        printf("%d\n",arr[i]);
    }
}
int main(){
    num();
    return 0;
}