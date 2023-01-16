#include <stdio.h>


struct _complex {
    float real;
    float imaginary;
};
typedef struct _complex Complex;

// Function to input complex numbers
Complex input_complex() {
    Complex c;
    printf("Enter the real and imaginary parts of a complex number: ");
    scanf("%f %f", &c.real, &c.imaginary);
    return c;
}

// Function to add two complex numbers
Complex add_complex(Complex a, Complex b) {
    Complex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;
    return c;
}

// Function to output the sum of two complex numbers
void output(Complex a, Complex b, Complex sum) {
    printf("The sum of (%f + %fi) and (%f + %fi) is (%f + %fi)\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}

int main() {
    Complex a, b, sum;

    // Input two complex numbers
    a = input_complex();
    b = input_complex();

    // Find the sum of the two complex numbers
    sum = add_complex(a, b);

    // Output the result
    output(a, b, sum);

    return 0;
}
#include <stdio.h>

