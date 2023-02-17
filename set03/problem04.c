#include <stdio.h>

// Function to input the size of the array from the user
int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

// Function to input the elements of the array from the user
void input_array(int n, int a[n]) {
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

// Function to check if a number is composite
int is_composite(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}

// Function to find the sum of all the composite numbers in the array
int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}

// Function to output the sum of composite numbers
void output(int sum) {
    printf("The sum of composite numbers in the array is: %d", sum);
}

// Main function
int main() {
    int n = input_array_size();
    int a[n];
    input_array(n, a);
    int sum = sum_composite_numbers(n, a);
    output(sum);
    return 0;
}
