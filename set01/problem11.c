#include <stdio.h>

struct complex
{
    int real;
    int imag;
};

int main()
{ 
    struct complex c1, c2, sum;

    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%d %d", &c1.real, &c1.imag);

    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%d %d", &c2.real, &c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    printf("Sum of the two complex numbers = %d + %di\n", sum.real, sum.imag);

    return 0;
}