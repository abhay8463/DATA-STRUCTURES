#include<stdio.h>
struct node
{
    int data;
    struct node*next;
};
struct node*start=NULL;
struct node*insert(struct node*start)
{
    struct node*ptr;
    struct node*newnode;
    newnode=(struct node*)malloc (sizeof(struct node));
    if(start==NULL)
    {
        int val;
        printf("ENTER THE NO YOU WANT TO PUSH\n");
        scanf("%d",&val);
        newnode->data=val;
        newnode->next=newnode;
        start=newnode;
    }
    else{int val;
    printf("ENTER THE NO YOU WANT TO PUSH\n");
    scanf("%d",&val);
    newnode->data=val;
    ptr=start;
    while(ptr!=NULL){
        ptr=ptr->next;}
    ptr->next=newnode;
    newnode->next=start;
    }return start;
}
struct node*pop(struct node*start)
{
    struct node*ptr;
    ptr=start;
    if(start==NULL)
    {
        printf("UNDERFLOW\n");
    }
    else{
    while(ptr->next!=start)
    {
        ptr=ptr->next;
    }
    ptr->next=start->next;
    printf("THE DELETED ELEMENT IS %d",ptr->data);
    free(ptr);
    start=ptr->next;
    }
    return start;
}
struct node*display(struct node*start)
{
    struct node*ptr;
    ptr=start;
    while(ptr->next!=start)
    {
        printf("\t %d",ptr->data);
        ptr=ptr->next;
    }
    printf("\t %d",ptr->data);
    return start;
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
 	case 1: start=insert(start);
         	break;
 	case 2: start=pop(start);
         	break;
 	case 3: start=display(start);
         	break;
 	case 4: break;

	default: printf("\n Choice Invalid.");
             break;
  }

}while(choice!=4);

}




