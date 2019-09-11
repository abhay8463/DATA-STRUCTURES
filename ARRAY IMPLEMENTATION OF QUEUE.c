#include<stdio.h>
#define CAP 100
int que[CAP];
int rear = 0;
int front=0;
void push(int x)
{
    if(rear==CAP)
    {
        printf("QUEUE IS FULL\n");
    }
    else
    {
        que[rear++]=x;
    }
}
int pop()
{
    if(rear==front)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        int key = que[front];
        for(int i=0;i<rear;i++)
        {
            que[i]=que[i+1];
        }
        rear--;
        return key;
    }
}
int peek()
{
    if(rear==front)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        return(que[rear-1]);
    }
}
void traverse(){
    if(rear==front)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
        {
            printf("THE ELEMENTS PRESENT IN QUEUE ARE\n");
            for(int i=0;i<rear;i++)
            printf("%d\n",que[i]);
        }
}
void main()
{
    int choice;
    do{
    printf("MENU\n 1.PUSH\n 2.POP\n 3.PEEK\n 4.TRAVERSE\n 5.EXIT\n");
    printf("ENTER YOUR CHOICE\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
            int x;
            printf("ENTER THE NO YOU WANT TO PUSH\n");
            scanf("%d",&x);
            push(x);
            break;
        }
    case 2:
        {
            printf("the popped element is %d\n",pop());
            break;
        }
    case 3:
        {
             printf("the last element is %d\n",peek());
             break;
        }
    case 4:
        {
            traverse();
            break;
        }
    case 5:
        {
            break;
        }
    default:
            printf("INCORRECT CHOICE\n");
            break;
    }
    }while(choice!=5);
}
