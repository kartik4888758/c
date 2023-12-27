#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;

};
int main()
{
    int position=2;
    del_pos(head,position);
    ptr=head;
    while(ptr !=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}