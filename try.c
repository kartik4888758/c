#include <stdio.h>
int main()
{
    int a;
    printf("enter your number:");
    scanf("%d",&a);
    if(a>5)
    {
        printf("choose greater than 5.");
    }
    else if (a>10)
    {
        printf("choose greater than 10.");
    }
    else
    {
        printf("number is not valid.");
    }
    return 0;
}