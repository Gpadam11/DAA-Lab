//Write a function generatePrimes(n) that returns an array of prime numbers less than or equal to n. If your program contains one or more loops, count and print the number of times each loop is executed. Do  it without using pow() function.

#include<stdio.h>

int generatePrimes(int n){
    int i, j, count=0, counti=0, countj=0;
    int arr[n];
    for (i=0;i<n;i++)
    {
        arr[i]=i+1;
    }   
    printf("The prime numbers are: ");
    for (i=1;i<n;i++)
    {
        counti++;
        for (j=2;j<arr[i];j++)
        {
            countj++;
            if (arr[i]%j==0)
            {
                break;
            }
        }
        if (j==arr[i])
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    printf("The number of times the outer loop is executed is: %d\n", counti);
    printf("The number of times the inner loop is executed is: %d\n", countj);
    return 0;
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    generatePrimes(n);
    return 0;
}