#include <stdio.h>

int input() {
  int n;
  printf("Enter the position of fibonacci number: ");
  scanf("%d", &n);
  return n;
}

int find_fibo(int n) {
  int first = 0, second = 1, fibo, i;
  if (n == 0) return 0;
  for (i = 2; i <= n; i++) {
    fibo = first + second;
    first = second;
    second = fibo;
  }
  return fibo;
}

void output(int n, int fibo) {
  printf("The %dth fibonacci number is %d\n", n, fibo);
}

int main() {
  int n = input();
  int fibo = find_fibo(n);
  output(n, fibo);
  return 0;
}
