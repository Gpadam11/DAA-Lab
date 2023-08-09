// Write a function gcd(k) which returns the GCD of kth and (k+1)th Fibonacci numbers for k>1. Use Euclid’s algorithm to calculate the GCD. Count the number of times the GCD loop executes for different values of k.
// Input: Enter k - 10
// Output: 10th and 11th Fibonacci numbers - 34,55
// GCD = 1

#include<stdio.h>
int gcd(int k)
{
    int a=0, b=1, c, i, count=0;
    for (i=0;i<k-1;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("The %dth fibonacci number is: %d\n", k, a);
    printf("The %dth fibonacci number is: %d\n", k+1, b);

    while (a!=b)
    {
        count++;
       if(a%b==0)
       {
           break;
       }
       else
       {
           int temp=a;
           a=b;
           b=temp%b;
       }
    }
    printf("The GCD is: %d\n", a);
    printf("The number of times the GCD loop executes is: %d\n", count);
}
int main()
{
    int k;
    printf("Enter the value of k: ");
    scanf("%d", &k);
    gcd(k);
    return 0;
}





//by Euclid's formula
/*
#include<stdio.h>

int ck,cg;


int gcd(int a,int b)
{
    cg++;
    if(a%b==0)
    {
        return b;
    }
    else
    {
        gcd(b,a%b);
    }
}


int main(int argc, char const *argv[])
{
    
    int n;
    scanf("%d",&n);
    int a=0,b=1;
    for(int i=2;i<n;i++)
    {
        ck++;
        int temp=b;
        b=a+b;
        a=temp;
    }
    if(n<2)
    {
        printf("GCD CANT BE FOUND");
    }
    printf("GCD FOR THE GIVEN NUMBERS %d and %d is %d",b,a+b,gcd(b,a+b));
    printf("\n ck : %d, cg : %d",ck,cg);
    return 0;
}*/