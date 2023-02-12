#include <stdio.h>

int input_n() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    return n;
}

void input(int n, int a[n]) {
    int i;
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

float odd_average(int n, int a[n]) {
    int i, count = 0;
    float sum = 0;

    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            count++;
            sum += a[i];
        }
    }

    return sum / count;
}

void output(float avg) {
    printf("The average of all the odd elements is: %f\n", avg);
}

int main() {
    int n;
    int a[100];
    float avg;

    n = input_n();
    input(n, a);
    avg = odd_average(n, a);
    output(avg);

    return 0;
}
