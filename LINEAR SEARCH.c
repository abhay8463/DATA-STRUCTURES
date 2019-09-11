#include<stdio.h>
int main()
{
int n,i=0;
printf("ENTER THE NO OF ELEMENTS YOU NEED TO STORE IN ARRAY\n");
scanf("%d",&n);
int a[n],key,flag;
printf("ENTER THE NO OF ELEMENTS YOU NEED TO STORE IN ARRAY\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("ENTER THE ELEMENT YOU WANT TO SEARCH\n");
scanf("%d",&key);
for(i=0;i<=n;i++)
{
if(a[i]==key)
{
    flag=1;
printf("Element found at %d position\n",i+1);
break;
}
else
{
flag=0;
}
}
if(flag==0)
{
    printf("ELEMENT NOT FOUND\n");
}
}
