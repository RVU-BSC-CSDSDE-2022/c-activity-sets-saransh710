#include <stdio.h>

void input_n_and_r(int *n, int *r) {
    printf("Enter the values of n and r: ");
    scanf("%d%d", n, r);
}

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void output(int n, int r, int result) {
    printf("%dC%d = %d\n", n, r, result);
}

int main() {
    int n, r;
    input_n_and_r(&n, &r);
    int result = nCr(n, r);
    output(n, r, result);
    return 0;
}
