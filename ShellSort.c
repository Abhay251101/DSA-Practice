// Shell sort 
#include<stdio.h>
int main()
{
    int i,n,j,gap,temp;     // variable 

    printf("Enter the size of array\n");
    scanf("%d",&n);     // users enters size of array 
    int a[n];

    printf("Enter the elements\n");
    for(i=0;i<n;i++) // user enters elements 
    scanf("%d",&a[i]);

    for(gap=n/2;gap>0;gap=gap/2)   // counts gap and reduce it by 2 at every iteration 
    {
        for(i=gap;i<n;i++)
        {
            temp = a[i];
            j =i;
            while(j>=gap && a[j-gap]>temp)  // condition (if true then swapping occur )
            {
                a[j] = a[j-gap];
                j = j-gap;     // statement for swapping 
            }
            a[j] = temp;
        }
    }

    printf("Sorted array is\n");
    for(i=0;i<n;i++)  // method for printing sorted array 
    printf("%d ",a[i]);

    return 0;
}