#include<stdio.h>
struct node
{
    int data;
    struct node*next;
};
struct node*start=NULL;
struct node*end=NULL;

void insert_left()
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
        node1->data=val;
    }
    else
    {
    node1->data=val;
    node1->next=NULL;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=node1;
    }
}
void insert_right()
{
    struct node*ptr,*preptr;
    struct node*node1;
    node1=(struct node*)malloc (sizeof(struct node));
    int val,num;
    printf("ENTER THE NO YOU WANT TO PUSH\n");
    scanf("%d",&val);
    ptr=start;
    if(start==NULL)
    {
        start=node1;
        node1->next=NULL;
        node1->data=val;
    }
    else{
    printf("ENTER THE VALUE BEFORE WHICH DATA IS TO BE INSERTED\n");
    scanf("%d",&num);
    node1->data=val;
    while(ptr->data!=num)
    {
        preptr=ptr;
        ptr=ptr->next;
    }preptr->next=node1;
    node1->next=ptr;
    }
}
void pop()
{
    struct node*ptr,*temp;
    temp=start;
    ptr=start;
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
void display()
{
    struct node*ptr;
    ptr=start;
    while(ptr->next!=NULL)
    {
        printf("\t %d",ptr->data);
        ptr=ptr->next;
    }
    printf("\t %d",ptr->data);
}
int main()
{

int choice,p;
do
{
   printf("\n What do you want to do with Queue?");
   printf("\n 1.Insert from left \n 2.Delete \n 3.Traverse \n 4.Exit \n 5.insert from right \n ");
   printf("\n Enter Choice:");
   scanf("%d",&choice);
   switch(choice)
   {
 	case 1: insert_left();
         	break;
 	case 2: pop();
         	break;
 	case 3: display();
         	break;
 	case 4: return 0;
 	case 5: insert_right();
            break;
	default: printf("\n Choice Invalid.");
  }

}while(choice!=4);
return 0;

}
