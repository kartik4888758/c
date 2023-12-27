#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linked(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *first;
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    first = (struct node *)malloc(sizeof(struct node));
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    

    first->next = head;
    first->data=40;
    head->data = 45;
    second->data = 50;
    third->data = 60;
    fourth->data=65;
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next=NULL;
    // printf("%d",head->data);
    linked(first);
}
