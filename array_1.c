//to store value into array by user input
#include <stdio.h>
int main(){
    int i;
    int marks[3];
    printf("physics:");
    scanf("%d",&marks[0]);
    printf("chemistry:");
    scanf("%d",&marks[1]);
    printf("maths:");
    scanf("%d",&marks[2]);
    printf("physics got %d\n",marks[0]);
    printf("chemistry got %d\n",marks[1]);
    printf("maths got %d\n",marks[2]);
    return 0;

}