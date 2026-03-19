// Selection sort 
#include<stdio.h>
int main()
{
    int i,j,n,min,temp; // variable 

    printf("Enter the size of array\n");
    scanf("%d",&n);      // user size of array 
    int a[n];

    printf("Enter the elements\n");
    for(i=0;i<n;i++)  // user number of elements 
    scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)   // calculate the number of passes 
    {
        min = i; // we assume that 0 index is smallest 
        for(j=i+1;j<n;j++)   // compare 
        {
            if(a[j]<a[min])  // condition (If true then swapping occur)
            min = j;  // smallest is swapped with j
        }
        temp = a[i];
        a[i] = a[min]; // condition for swapping 
        a[min] = temp;
    }

    printf("Sorted array is\n");
    for(i=0;i<n;i++) // printf (Sorted array )
    printf("%d ",a[i]);

    return 0;
}