#include <stdio.h>
int d=30;
int e=50;
void add(){
    int a;
    int b;
    int c;
    printf("enter value for a");
    scanf("%d",&a);
    printf("enter value for b");
    scanf("%d",&b);
    c=a+b+d;
    printf("sum is %d",c);

}

int main(){
    add();

    return 0;

}