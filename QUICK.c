#include<stdio.h>
void quick(a,p,r,n)
{
if(p<r)
{
int q=partition(a,p,r);
quick(a,p,q-1);
quick(a,q+1,r);
}
}
int partition(a,p,r,n)
{

int temp;
int x;
x=a[r];
int i=p-1;
for(int j=p;j<r-1;j++)
{
if(a[j]<x)
{
i=i+1;
temp = a[i];
a[i]=a[j];
a[j]=temp;
}
}
i=i+1;
temp = a[i];
a[i]=a[r];
a[r]=temp;
return(i);
}
int main()
{
int i=0,j=0,n,k;
printf("ENTER THE NO OF ELEMENTS\n");
scanf("%d",&n);
int a[n];
printf("ENTER THE ELEMENTS TO BE STORED IN ARRAY\n");
for(k=0;k<n;k++)
{
scanf("%d",&a[k]);
}
int p=0;
int r=n;
int x;
void quick(a,p,r);
int q;
printf("SORTED ARRAY IS \n");
{
    for(k=0;k<n;k++)
{
scanf("%d",&a[k]);
}
}
}
