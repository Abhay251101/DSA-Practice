// Insertion sort
#include <stdio.h>
int main()
{
    int i, n, curr, prev;
    printf("Enter the size of array\n");
    scanf("%d", &n); // size of array
    int a[n];
    printf("Enter the number of elements\n");
    for (i = 0; i < n; i++) // user enters number of elements
        scanf("%d", &a[i]);
    for (i = 1; i < n; i++) // starts from index 1 because 0 index is already sorted
    {
        curr = a[i];
        prev = i - 1;
        while (prev >= 0 && a[prev] > curr)
        {
            a[prev + 1] = a[prev]; // Condition
            prev--;
        }
        a[prev + 1] = curr;
    }
    printf("Sorted array is\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}