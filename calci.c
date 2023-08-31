#include <stdio.h>
int main(){
    char ok;
    double  first,second;
    printf("enter an operator to use( + , - , * , / , s , c ):");
    scanf("%c",&ok);
    printf("Enter two operands :");
    scanf("%lf %lf",&first,&second);

    switch(ok){
        case '+':
        printf("%.1lf + %.1lf=%.1lf",first,second,first+second);
        break;
        case '-':
        printf("%.1lf - %.1lf=%.1lf",first,second,first-second);
        break;
        case '*':
        printf("%.1lf * %.1lf=%.1lf",first,second,first*second);
        break;
        case '/':
        printf("%.1lf / %.1lf=%.1lf",first,second,first/second);
        break;
        case 's':
        printf("square is %lf",first*second);
        break;
        case 'c':
        printf("cube is %lf",first*second*first);
        break;
        default:
        printf("error in operator mentioned !!!");
    }
    return 0;

    }