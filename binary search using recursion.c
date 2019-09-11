#include<stdio.h>
int binarySearch(int a[], int low, int high, int key)
{
    if (high >= low) {
        int mid = (low + high) / 2;

         if (a[mid] == key)
            return mid;

         if (a[mid] > key)
            return binarySearch(a, low, mid - 1, key);

         else
            return binarySearch(a, mid + 1, high, key);
    }
    return 0;
    }

int main()
{
int n,i=0;
printf("ENTER THE NO OF ELEMENTS YOU NEED TO STORE IN ARRAY\n");
scanf("%d",&n);
 int a[n];
int key,flag,temp;
int low=0,high=n-1, mid=(low+high)/2;
printf("ENTER THE ELEMENTS YOU NEED TO STORE IN ARRAY IN SORTED MANNER\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("ENTER THE ELEMENT YOU WANT TO SEARCH\n");
scanf("%d",&key);
int binary = binarySearch(a, 0, n - 1, key);
if(binary==0)
{
    printf("element not found\n");
}
else
{
    printf("element is found at %d position",binary+1);
}
}
