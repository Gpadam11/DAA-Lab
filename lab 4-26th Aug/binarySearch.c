#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (key == arr[mid]) {
            return mid;
        }
        if (key < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    // Read numbers from the text file
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("File 'numbers.txt' not found.\n");
        return 1;
    }

    int n;
    fscanf(file, "%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        fscanf(file, "%d", &arr[i]);
    }
    fclose(file);

    int key;
    printf("Enter key to search: ");
    scanf("%d", &key);

    int pos = binarySearch(arr, n, key);
    if (pos == -1) {
        printf("Key not found\n");
    } else {
        printf("Key found at position %d\n", pos + 1);
    }

    return 0;
}
