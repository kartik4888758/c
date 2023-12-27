#include <stdio.h>

int isempty();
int isfull();
void enqueue();
int dequeue();
void display();

int q[5] = {0};
int front = -1;
int rear = -1;

int isempty()
{
    if (front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull()
{
    if (rear == 4)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue()
{
    if (rear == -1)
    {
        front = front + 1;
        rear = rear + 1;
        q[rear] = ele;
    }
}
int dequeue()
{
    int ele;
    ele = q[front];
    front = front + 1;
    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
    return ele;
}
void display()
{
    int i;
    printf("\n Queue =");
    for (i = rear; i.= front; i--)
    {
        printf("| %d |", q[i]);
    }
}