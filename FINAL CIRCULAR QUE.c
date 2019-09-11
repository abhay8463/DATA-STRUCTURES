#include<stdio.h>
struct node
{
    int data;
    struct node*next;
};
struct node*start=NULL;
struct node*end=NULL;

void insert()
{

    struct node*ptr;
    struct node*node1;
    node1=(struct node*)malloc (sizeof(struct node));
    int val;
    printf("ENTER THE NO YOU WANT TO PUSH\n");
    scanf("%d",&val);
    ptr=start;
    if(start==NULL)
    {
        start=node1;
        node1->next=start;
        node1->data=val;
    }
    else
    {
    node1->data=val;
    node1->next=start;
    while(ptr->next!=start)
    {
        ptr=ptr->next;
    }
    ptr->next=node1;
    }
}
void pop()
{
    struct node*ptr,*temp;
    temp=start;
    ptr=start;
    if(start==NULL)
    {
        printf("EMPTY\n");
    }
    else if(ptr==ptr->next)
    {
        start=NULL;
    }
    else
    {
    start=ptr->next;
    while(ptr->next!=temp)
    {
        ptr=ptr->next;
    }
    ptr->next=start;
    printf("THE DELETED ELEMENT IS %d",temp->data);
    free(temp);
    ptr=NULL;
    }
}
void display()
{
    struct node*ptr;
    ptr=start;
    if(start==NULL)
    {
       printf("EMPTY\n");
    }
    else
    {
    while(ptr->next!=start)
    {
        printf("\t %d",ptr->data);
        ptr=ptr->next;
    }
    printf("\t %d",ptr->data);
    }
}
int main()
{

int choice,p;
do
{
   printf("\n What do you want to do with Queue?");
   printf("\n 1.Insert \n 2.Delete \n 3.Traverse \n 4.Exit");
   printf("\n Enter Choice:");
   scanf("%d",&choice);
   switch(choice)
   {
 	case 1: insert();
         	break;
 	case 2: pop();
         	break;
 	case 3: display();
         	break;
 	case 4: return 0;
	default: printf("\n Choice Invalid.");
  }

}while(choice!=4);
return 0;

}




