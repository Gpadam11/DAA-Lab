// Write a program to implement binary search to give position if first appearance of the element being searched. 
// Input 1:
// Enter size of array: 10
// Enter elements of the array
// 7 9 2 11 19 17 12 5 7 12
// Enter element to be searched: 12
// Output:
// 12 found at position 7

// Input 2: Read from a text file containing numbers. Enter element to be searched: 1678
// Output:
// 1678 found at position 7

#include <stdio.h>
int binarySearch(int arr[], int n, int key){
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (key == arr[mid]) {
            return mid;
        }
        if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1; //-1 indicates key not found
}

int main() {
   int n;
   printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter key to search: ");
    scanf("%d", &key);
    
    int pos = binarySearch(arr, n, key);
    if (pos == -1) {
        printf("Key not found\n");
    }
    else {
        printf("Key found at position %d\n", pos + 1);
    }
    return 0;
}

