  #include <stdio.h>



int input() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    return x;
}

void add(int a, int b, int *sum) {
    *sum = a + b;
}

void output(int a, int b, int sum) {
    printf("%d + %d = %d\n", a, b, sum);
}

int main() {
    int a = input();
    int b = input();
    int sum;
    add(a, b, &sum);
    output(a, b, sum);
    return 0;
}
