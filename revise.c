#include <stdio.h>
void add()
{
    int a,b;
    printf("enter a number:");
    scanf("%d",a);
    printf("enter another number:");
    scanf("%d",b);
    int c=a+b;
    printf("sum of both number is %d",c);
    
}

int main()
{
    add();
    return 0;
}