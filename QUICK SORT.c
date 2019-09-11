#include<stdio.h>
int partition();
void quick();
int n;
printf("ENTER THE NO OF ELEMENTS\n");
scanf("%d",&n);
int a[n];
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
int partition(a,p,r);
int q;
void quick(a,p,r);
printf("SORTED ARRAY IS \n");
{
    for(k=0;k<n;k++)
{
scanf("%d",&a[k]);
}
}
}
int i=0,j=0,k;
int p=0;
int r=n;
int x;
int q;
int partition(a,p,r)
{
i=p-1;
for(j=p;j<r-1;j++)
{
if(a[j]<a[r])
{
i=i+1;
a[i]=a[j];
}
}
a[i+1]=a[r];
return(i+1);
}
void quick(a,p,r)
{
if(p<r)
{
q=partition(a,p,r);
quick(a,p,q-1);
quick(a,q+1,r);
}
}
