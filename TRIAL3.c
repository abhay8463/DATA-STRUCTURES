#include<stdio.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*start=NULL;
struct node*end=NULL;
void insert_front()
{
    if(start==NULL)
    {
        start=end=node1;
    }
}
