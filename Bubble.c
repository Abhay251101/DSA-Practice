// Example related to bubble sort
#include <stdio.h>
int main()
    {
        int i,j,n,t;
        printf("Enter the size of array\n");
        scanf("%d",&n);
        int a[n]; 

        printf("Enter the elements\n");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        for(i=0;i<n;i++)
        for(j=0;j<n-i;j++)
        if(a[j] > a[j+1])
        {
            t = a[j];
            a[j] = a[j+1];
            a[j+1] = t;
        }

        printf("Sorted array is\n");
        for(i=0;i<n;i++)
        printf("%d ",a[i]);

        return 0; 

    }
