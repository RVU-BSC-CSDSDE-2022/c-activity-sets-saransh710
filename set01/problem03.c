#include <stdio.h>

int input() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    return x;
}

int add(int a, int b) {
    return a + b;
}

void output(int a, int b, int sum) {
    printf("%d + %d = %d\n", a, b, sum);
}

int main() {
    int a = input();
    int b = input();
    int sum = add(a, b);
    output(a, b, sum);
    return 0;
}
