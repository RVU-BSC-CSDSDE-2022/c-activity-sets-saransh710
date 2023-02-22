#include <stdio.h>

int input_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    printf("Enter %d integers separated by spaces: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int find_largest_index(int n, int a[n]) {
    int largest_index = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[largest_index]) {
            largest_index = i;
        }
    }
    return largest_index;
}

void output(int index) {
    printf("The index of the largest number is %d\n", index);
}

int main() {
    int n = input_size();
    int a[n];
    input_array(n, a);
    int index = find_largest_index(n, a);
    output(index);
    return 0;
}
