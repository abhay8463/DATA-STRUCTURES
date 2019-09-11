#include<stdio.h>
int a[5];
int binarySearch( int low, int high, int key)
{
    if (high >= low) {
        int mid = (low + high) / 2;

         if (a[mid] == key)
            return mid;

         if (a[mid] > key)
            return binarySearch( low, mid - 1, key);

         else
            return binarySearch( mid + 1, high, key);
    }
    return 0;
    }

int main()
{
int n,i=0;
printf("ENTER THE NO OF ELEMENTS YOU NEED TO STORE IN ARRAY\n");
scanf("%d",&n);
 static int a[5]={2,5,6,8,9};
int key,flag,temp;
int low=0,high=4, mid=(low+high)/2;
printf("ENTER THE ELEMENT YOU WANT TO SEARCH\n");
scanf("%d",&key);
int binary = binarySearch(a, 0, 4, key);
if(binary==0)
{
    printf("element not found\n");
}
else
{
    printf("element is found at %d position",binary+1);
}
}
