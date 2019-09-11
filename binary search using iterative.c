#include<stdio.h>
int main()
{
int n,i=0;
printf("ENTER THE NO OF ELEMENTS YOU NEED TO STORE IN ARRAY\n");
scanf("%d",&n);
int a[n],key,flag,temp;
int low=0,high=n-1, mid=(low+high)/2;
printf("ENTER THE ELEMENTS YOU NEED TO STORE IN ARRAY IN SORTED MANNER\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("ENTER THE ELEMENT YOU WANT TO SEARCH\n");
scanf("%d",&key);
while(low<=high)
{
    if(a[mid]==key)
    {
        flag=1;
        break;
    }
    else if(a[mid]>key)
    {
        high=mid-1;
        mid=(low+high)/2;
    }
    else if(a[mid]<key)
    {
        low=mid+1;
        mid=(low+high)/2;
    }
}
if(flag==1)
{
    printf("element is found at %d position",mid+1);
}
else
{
    printf("element not found\n");
}
}
