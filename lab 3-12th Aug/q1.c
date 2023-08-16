// Write a function recursiveMin(a, n) that recursively computes the
// minimum value in the input array a and returns it. Initially, n = |a|. recursiveMin(a, n) : a[0] if n==1 [base case]
// min(a[n-1], recursiveMin(a, n-1)) [recursive
// definition
// Input: Enter size of array - 100
// Output: Minimum value = 1

#include <stdio.h>

int recursiveMin(int a[], int n) {
    if (n == 1) {
        return a[0];
    }
    int restMin = recursiveMin(a, n - 1);
    return (a[n - 1] < restMin) ? a[n - 1] : restMin;
}

int calculateDepth(int n) {
    if (n == 1) {
        return 1;
    }
    return 1 + calculateDepth(n - 1);
}

int main() {
    int n;
    scanf("%d",&n);
    int array[n];
        for (int j = 0; j < n; j++) {
            array[j] = n - j;
        }

        int depth = calculateDepth(n);
        double c1 = (double)depth / n;

        printf("Input size: %d, Observed depth of recursion: %d, Estimated parameter c1: %.6f\n", n, depth, c1);
    

    return 0;
}