//  Write a program to display an array of n integers (n>1), where every index of the array should contain the product of all elements in the input array except the element at the given index. Solve this problem by taking a single loop and without an additional array. 
// Input Array: 3 4 5 1 2
// Output Array: 40 30 24 120 60

#include<stdio.h>
int main(){
    int n, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i=0;i<n;i++)
    {
      scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++)
    {
        int prod=1;
        for (j=0;j<n;j++)
        {
            if (i!=j)
            {
                prod=prod*arr[j];
            }
        }
        printf("%d ", prod);
    }
}