//to input value in structure using dot operator
#include <stdio.h>
#include <string.h>
struct person{
    char name[50];
    int citno;
    int salary;
} person1;person2;
int main(){
    strcpy(person1.name,"alex");
    person1.citno=1984;
    person1.salary=9949464;
    printf("name:%s\n",person1.name);
    printf("citizenship number:%d\n",person1.citno);
    printf("salary:%d\n",person1.salary);
    return 0;
}