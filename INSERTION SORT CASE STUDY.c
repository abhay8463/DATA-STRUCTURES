#include<stdio.h>
struct student
{
char name[100];
int marks;
};
int main()
{
int n,i=0,j;
printf("ENTER THE NO OF STUDENTS\n");
scanf("%d",&n);
struct student s1[n];
int temp;
for(i=0;i<n;i++)
{
printf("ENTER THE STUDENT NAME AND NO OF MARKS SCORED:\n");
scanf("%s %d",s1[i].name,&s1[i].marks);
}

for(j=0;j<n;j++)
    {
        temp=s1[j].marks;
        i=j-1;
        while(i>-1 && s1[i].marks>temp)
            {
                s1[i+1]=s1[i];
                i=i-1;
                s1[i+1].marks=temp;
            }
    }
printf("REPORT CARD \n NAME \t MARKS \n");
printf("\n");
for(i=0;i<n;i++)
    {
        printf("%s\t%d\t \n",s1[i].name,s1[i].marks);
    }
}
