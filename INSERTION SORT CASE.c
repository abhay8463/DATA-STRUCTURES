#include<stdio.h>
#include<string.h>
struct student
{
char name[100];
int marks;
};
int main()
{
int n,i=0,j,temp;
char key[100];
printf("ENTER THE NO OF STUDENTS\n");
scanf("%d",&n);
struct student s1[n];
for(i=0;i<n;i++)
{
printf("ENTER THE STUDENT NAME:\n");
scanf("%s",s1[i].name);
printf("ENTER MARKS SCORED\n");
scanf("%d",&s1[i].marks);
}

for(j=0;j<n;j++)
    {
        temp=s1[j].marks;
        strcpy(key,s1[j].name);
        i=j-1;
        while(i>-1 && s1[i].marks>temp)
            {
                s1[i+1].marks=s1[i].marks;
                strcpy(s1[i+1].name,s1[i].name);
                i=i-1;
                s1[i+1].marks=temp;
                strcpy(s1[i+1].name,key);
            }
    }
printf("REPORT CARD \nNAME \t MARKS \n");
printf("\n");
for(i=0;i<n;i++)
    {
        printf("%s\t:%d\t \n",s1[i].name,s1[i].marks);
    }
}
