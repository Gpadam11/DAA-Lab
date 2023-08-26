//Reading from File

#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int size, key;
    
    FILE *file = fopen("input.txt", "r");
    
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    
    fscanf(file, "%d", &size);
    
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        fscanf(file, "%d", &arr[i]);
    }
    
    fclose(file);
    
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
