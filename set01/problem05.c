#include <stdio.h>

int compare(int a, int b, int c) {
    int largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
  return largest;
    
}

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    int res=compare(a, b, c);
    printf("the largest number is : %d",largest);
    return 0;
}