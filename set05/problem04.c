#include <stdio.h>

int input_degree() {
    int n;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);
    return n;
}

void input_coefficients(int n, float a[]) {
    printf("Enter the coefficients of the polynomial: ");
    for (int i = 0; i <= n; i++) {
        scanf("%f", &a[i]);
    }
}

float input_x() {
    float x;
    printf("Enter the value of x at which the polynomial is to be evaluated: ");
    scanf("%f", &x);
    return x;
}

float evaluate_polynomial(int n, float a[], float x) {
    float result = a[n];
    for (int i = n - 1; i >= 0; i--) {
        result = result * x + a[i];
    }
    return result;
}

void output(int n, float a[], float x, float result) {
    printf("The polynomial of degree %d with coefficients: ", n);
    for (int i = 0; i <= n; i++) {
        printf("%f ", a[i]);
    }
    printf("\n");
    printf("evaluated at x = %f is: %f\n", x, result);
}

int main() {
    int n = input_degree();
    float a[n+1];
    input_coefficients(n, a);
    float x = input_x();
    float result = evaluate_polynomial(n, a, x);
    output(n, a, x, result);
    return 0;
}
