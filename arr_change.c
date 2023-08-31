//to change value in the array
#include <stdio.h>
void array()
{
    int i;
    int a[3]={1,2,3};
    a[0]=7;
    a[1]=8;
    a[2]=9;
    for(i=0;i<3;++i)
    {
        printf("%d\n",a[i]);
    }
}
int main()
{
    array();
    return 0;
    
}