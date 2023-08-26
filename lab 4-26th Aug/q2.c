#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int size, key;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to be searched: ");
    scanf("%d", &key);
    
    int result = linearSearch(arr, size, key);
    
    if (result != -1) {
        printf("%d found at position %d.\n", key, result + 1);
    } else {
        printf("%d not found.\n", key);
    }
    
    return 0;
}
