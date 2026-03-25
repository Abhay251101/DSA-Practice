// Counting Sort 
#include<stdio.h>
int main()
{
    int i,n,max=0; //Variables 

    printf("Enter the size of array\n");
    scanf("%d",&n);     //User enters size of array
    int a[n];

    printf("Enter the elements\n");
    for(i=0;i<n;i++)         //user enters elements 
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        max = a[i];  // max is swapped with maximum element in array 
    }
  
    int count[max+1];       //initalization of count array 

    for(i=0;i<=max;i++)
    count[i] = 0;      //every index is filled with zero (temp)

    for(i=0;i<n;i++)
    count[a[i]]++;   //count is increased for each element

    printf("Sorted array is\n");
    for(i=0;i<=max;i++)
    {
        while(count[i]>0)
        {
            printf("%d ",i);
            count[i]--;          // method for printing sorted array 
        }
    }
    return 0;
}