#include <stdio.h>

struct basketball{
    char pname[30];
    char threes[10];
    char fouls[10];
};
int main(){
    struct basketball p1={"boi","one","one"};
    struct basketball p2={"mei","two","two"};
    struct basketball p3={"mio","three","three"};
    
    printf("player %c, scored %c, points owning %c",p1.pname,p2.threes,p3.fouls);
    return 0;

}