#include <stdio.h>

int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int sum_n_array(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

void output(int sum) {
    printf("The sum of the array is %d", sum);
}

int main() {
    int n, a[100], sum;
    n = input_array_size();
    input_array(n, a);
    sum = sum_n_array(n, a);
    output(sum);
    return 0;
}
