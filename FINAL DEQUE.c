#include<stdio.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*start=NULL;

void insert_beg()
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
        node1->next=NULL;
        node1->prev=NULL;
        node1->data=val;
    }
    else
    {
    node1->data=val;
    start->prev=node1;
    start->next=NULL;
    node1->next=start;
    node1->prev=NULL;
    start=node1;
    }
}
void insert_end()
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
        node1->next=NULL;
        node1->prev=NULL;
        node1->data=val;
    }
    else
    {
    node1->data=val;
     while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    node1->prev=ptr;
    ptr->next=node1;
    node1->next=NULL;
    }
}
void delete_beg()
{
    struct node*ptr,*temp;
    ptr=start;
    if(start==NULL)
    {
        printf("DOUBLE ENDED QUEUE IS EMPTY\n");
    }
    else  if(start->prev==NULL && start->next==NULL)
    {
        printf("THE DELETED ELEMENT IS %d",ptr->data);
        start=NULL;
    }
    else
    {
    start=start->next;
    start->prev=NULL;
    printf("THE DELETED ELEMENT IS %d",ptr->data);
    free(ptr);
    }
}
void delete_end()
{
    struct node*ptr,*temp;
    ptr=start;
    if(start==NULL)
    {
        printf("DOUBLE ENDED QUEUE IS EMPTY\n");
    }
    else  if(start->prev==NULL && start->next==NULL)
    {
        printf("THE DELETED ELEMENT IS %d",ptr->data);
        start=NULL;
    }
    else
    {
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
     printf("THE DELETED ELEMENT IS %d",ptr->data);
     ptr->prev->next=NULL;
     free(ptr);
    }
}
void display()
{
    struct node*ptr;
    ptr=start;
        if(start==NULL)
    {
        printf("DOUBLE ENDED QUEUE IS EMPTY\n");
    }
    else
    {
    while(ptr->next!=NULL)
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
   printf("\n What do you want to do with Double ended Queue?");
   printf("\n 1.Insert from front \n 2.Insert from rear \n 3.Delete from front \n 4.Delete from rear\n 5.Display\n 6.Exit\n");
   printf("\n Enter Choice:");
   scanf("%d",&choice);
   switch(choice)
   {
 	case 1: insert_beg();
         	break;
 	case 2: insert_end();
         	break;
 	case 3: delete_beg();
         	break;
 	case 4: delete_end();
            break;
    case 5: display();
            break;
    case 6: break;
	default: printf("\n Choice Invalid.");
  }

}while(choice!=6);
return 0;

}
