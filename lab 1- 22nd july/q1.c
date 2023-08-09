//Write a program to find out the kth smallest and kth largest element stored in an array of n integers without actually sorting. The array takes input through random number generation within a given range using rand function.  
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, k, i, j, temp, max=0, min=0, left, right;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i=0;i<n;i++)
    {
      scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    // for (i=0;i<n;i++)
    // {
    //   for (j=i+1;j<n;j++)
    //   {
    //     if (arr[i]>arr[j])
    //     {
    //       temp=arr[i];
    //       arr[i]=arr[j];
    //       arr[j]=temp;
    //     }
    //   }
    // }
    // printf("The kth smallest element is: %d\n", arr[k-1]);
    // printf("The kth largest element is: %d\n", arr[n-k]);
    // return 0;
    //}
//without sorting
left=arr[0];
right=arr[n-1];
    for(i=0;i<n;i++)
    {
        if (arr[i]%2==0){
            left=arr[i];
            if(max<left)
            {
                max=left;
            }
        }
          
    }
    printf("The kth smallest element is: %d\n", arr[k-1]);
    printf("The kth largest element is: %d\n", arr[n-k-1]);
    return 0;
}











//for rand function use this
//arr[i]=rand()%(upper-lower+1)+lower;
//where upper and lower are the upper and lower limits of the range