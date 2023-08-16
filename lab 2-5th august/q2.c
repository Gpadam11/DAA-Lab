/* Write a function sine(x, d) that returns the sine of input x accurately
up to d decimal places computed using Taylor’s series approximation of sine. 
sin(x) = x - x^3/3! + x^5/5! - x^7/7! + …
Count and print the number of times the main loop in your program executes
pow() function is not allowed.*/

#include <stdio.h>
    int count = 0;

long int factorial(int n) {
    if (n <= 1)
        return 1;

    long int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double sine(double x, int d) {
    double result = x;
    double term = x;
    int sign = -1;
    double tolerance = 1.0 / (10 * d);


    for (int i = 3; term >= tolerance; i += 2) {
        term = (x * x) / (i * (i - 1)) * term;
        result += sign * term;
        sign *= -1;
        count++;
    }

    return result;
}

int main() {
    double x;
    int d;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of decimal places (d): ");
    scanf("%d", &d);

    double result = sine(x, d);
    printf("sin(%lf) = %.*lf\n", x, d, result);
    printf("Number of count: %d\n", count);

    return 0;
}
