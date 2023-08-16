// To find distinct integers in an array. Write a function unique(a) that returns an array of unique elements in input array a. Run the
// function on inputs of following sizes and count the number of basic operations

#include <stdio.h>
#include <stdlib.h>

int unique(int arr[], int n, int result[]) {
    int count = 0;
    int uni;
    for (int i = 0; i < n; i++) {
        uni = 1;
        for (int j = 0; j < count; j++) {
            if (arr[i] == result[j]) {
                uni = 0;
                break;
            }
        }
        if (uni) {
            result[count++] = arr[i];
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result[n];
    int count = unique(arr, n, result);

    printf("Unique elements: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}