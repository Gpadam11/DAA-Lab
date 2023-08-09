//Write a program to find out the kth smallest and kth largest element stored in an array of n integers. do it without sorting and use rand function to generate the array elements.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void find_second_smallest_largest(int arr[], int n, int *second_smallest, int *second_largest)
{
    if (n < 2)
    {
        *second_smallest = *second_largest = INT_MIN;
        return;
    }

    int smallest = INT_MAX;
    *second_smallest = INT_MAX;
    int largest = INT_MIN;
    *second_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            *second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < *second_smallest && arr[i] != smallest)
        {
            *second_smallest = arr[i];
        }

        if (arr[i] > largest)
        {
            *second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > *second_largest && arr[i] != largest)
        {
            *second_largest = arr[i];
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Array size should be at least 2.\n");
        return 1;
    }

    
    int min_range = 1;
    int max_range = 100;

    
    int *random_array = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        random_array[i] = min_range + rand() % (max_range - min_range + 1);
    }

    printf("Generated Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", random_array[i]);
    }
    printf("\n");

    int second_smallest, second_largest;
    find_second_smallest_largest(random_array, n, &second_smallest, &second_largest);

    printf("Second Smallest: %d\n", second_smallest);
    printf("Second Largest: %d\n", second_largest);

    free(random_array);
    return 0;
}