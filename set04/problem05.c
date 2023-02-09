#include <stdio.h>
#include <stdbool.h>

int input_array_size() {
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  return n;
}

void init_array(int n, int a[n]) {
  for (int i = 0; i < n; i++) {
    a[i] = i + 2;
  }
}

void eratosthenes_sieve(int n, int a[n]) {
  int i, j;
  for (i = 0; i < n; i++) {
    if (a[i] != 0) {
      for (j = 2 * a[i] - 2; j < n; j += a[i]) {
        a[j] = 0;
      }
    }
  }
}

void output(int n, int a[n]) {
  printf("The prime numbers between 2 and %d are: \n", n);
  for (int i = 0; i < n; i++) {
    if (a[i] != 0) {
      printf("%d\n", a[i]);
    }
  }
}

int main() {
  int n = input_array_size();
  int a[n];
  init_array(n, a);
  eratosthenes_sieve(n, a);
  output(n, a);
  return 0;
}
