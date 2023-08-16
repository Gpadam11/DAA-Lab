#include <stdio.h>
#include <stdlib.h>

void find2ndSmallestAndLargest(int arr[], int n) {
    if (n < 2) {
        printf("Array should have at least 2 elements.\n");
        return;
    }

    int smallest = arr[0], secondSmallest = arr[1];
    int largest = arr[0], secondLargest = arr[1];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    printf("2nd Smallest element: %d\n", secondSmallest);
    printf("2nd Largest element: %d\n", secondLargest);
}

int main() {

//   srand(time(NULL)); 
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array should have at least 2 elements.\n");
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand()%100;
    }

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    find2ndSmallestAndLargest(arr, n);

    return 0;
}