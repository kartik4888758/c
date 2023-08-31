#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;
    int seat;
};
int main(){
    struct student s1,s2,s3,s4,s5;
    strcpy(s1.name,"kartik");
    s1.roll=10;
    s1.seat=27;
    strcpy(s2.name,"karti");
    s2.roll=20;
    s2.seat=29;
    strcpy(s3.name,"kart");
    s3.roll=30;
    s3.seat=45;
    strcpy(s4.name,"karti");
    s4.roll=20;
    s4.seat=29;
    strcpy(s5.name,"kart");
    s5.roll=30;
    s5.seat=45;
    printf("std 1 is %s\t,roll no. is %d\t,seat he got is %d\n",s1.name,s1.roll,s1.seat);
    printf("std 2 is %s\t,roll no. is %d\t,seat he got is %d\n",s2.name,s2.roll,s3.seat);
    printf("student 3 is %s\t,his/her roll no. is %d\t,total seat he got is %d\t",s3.name,s3.roll,s3.seat);
    printf("std 4 is %s\t,roll no. is %d\t,seat he got is %d\n",s4.name,s4.roll,s4.seat);
    printf("std 5 is %s\t,roll no. is %d\t,seat he got is %d\n",s5.name,s5.roll,s5.seat);
    return 0;

}