#include <stdio.h>
#include <math.h> 

double square_root(double num);

int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Square root of %.2lf = %.2lf", num, square_root(num));
    return 0;
}

double square_root(double num)
{
    return sqrt(num);
}