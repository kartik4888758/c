//to store value in structure without using dot operator
#include <stdio.h>
struct student{
    char name[50];
    int roll;
    char city[12];
};
int main(){
struct student s1={"sam",1000,"pune"};
struct student s2={"sami",1200,"mumbai"};
struct student s3={"samin",1400,"nasik"};
printf("the name of student 1 is %c,his roll is %d,his city is %c",s1);
return 0;
}
