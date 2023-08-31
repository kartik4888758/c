//value into structure without dot operator
#include <stdio.h>
#include <string.h>

struct office{
    char name[50];
    int code;
    char city[10];
};

int main(){
    struct office e1={"aman",10,"pune"};
    struct office e2={"amar",12,"mumbai"};
    struct office e3={"amaron",14,"muner"};
    printf("the name of employee 1 is %s\t,the code is %d\t,the city is %s\n",e1.name,e2.code,e3.city);
    struct office *ptr=&e3;
    printf("the name is %s\n",(*ptr).name);
    printf("the code is %d",ptr->code);
    return 0;
}