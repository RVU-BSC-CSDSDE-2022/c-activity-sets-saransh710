#include <stdio.h>

int input_number(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int is_composite(int n) {
    int i;
    if (n <= 1) return 0;
    for (i = 2; i*i < n; i++) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0;
}

void output(int n, int result) {
    printf("Number: %d\n", n);
    if (result == 1) {
        printf("%d is a composite number\n", n);
    } else {
        printf("%d is not a composite number\n", n);
    }
}
int main(){
  int n,result;
  n=input_number();
  result=is_composite(n);
  output(n,result);
  return 0;



  
}