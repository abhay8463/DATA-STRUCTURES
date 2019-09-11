#include<stdio.h>
void quick_sort(int [],int,int,int);
int partition(int [],int,int);
int main()
{
int i,n,p,r;
printf("Enter the number of elements: ");
scanf("%d",&n);
int a[n];
printf("\nEnter the values: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
p=0;
r=n-1;
quick_sort(a,p,r,n);
printf("SORTED ARRAY IS :\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
void quick_sort(int a[],int p,int r,int n)
{
int q,i;
if(p<r)
{
q=partition(a,p,r);
quick_sort(a,p,q-1,n);
quick_sort(a,q+1,r,n);
}
}
int partition(int a[],int p,int r)
{
int i,j,temp;
int x;
x=a[r];
i=p-1;
for(j=p;j<=r-1;j++)
{
if(a[j]<=x)
{
i=i+1;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
i=i+1;
temp=a[i];
a[i]=a[r];
a[r]=temp;
return i;

}
