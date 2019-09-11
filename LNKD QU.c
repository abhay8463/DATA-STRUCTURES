#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void insert(int val)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	if(front==NULL&&rear==NULL)
	{
    	front=temp;
    	rear=temp;
	}
	else
    	{
        	rear->next=temp;
            temp->next=NULL;
        	rear=temp;
    	}
}
int delete()
{
if(front==NULL)
{
	printf("EMPTY");
}
else
{
  struct node *temp;
  int val=front->data;
  temp=front;
  front=front->next;
  free(temp);
  return val;
}
}
void traverse()
{
	struct node *temp;
	temp=front;
	while(temp!=NULL)
	{
    	printf("%d\t",temp->data);
    	temp=temp->next;
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
 	case 1: printf("\n Enter the element you want to Insert=");
         	scanf("%d",&p);
         	insert(p);
         	break;
 	case 2: p=delete();
            	printf("THE DELETED VALUE IS:-%d",p);
         	break;
 	case 3: traverse();
         	break;
 	case 4: return 0;
	default: printf("\n Choice Invalid.");
  }

}while(choice!=4);

}





