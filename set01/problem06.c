
#include <stdio.h>

void compare(int *a, int *b, int *c) {
    int largest = *a;
    if (*b > largest) {
        largest = *b;
    }
    if (*c > largest) {
        largest = *c;
    }
    printf("Largest number is: %d\n", largest);
}

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    compare( &a, &b, &c);
  
     return 0;
}
////proto#2
#include <stdio.h>

void compare(int a, int b, int c,int *largest) {
     *largest = a;
    if (b > *largest) {
        *largest = b;
    }
    if (c > *largest) {
        *largest = c;
    }
    printf("Largest number is: %d\n", *largest);
}

int main() {
    int a, b, c,largest;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    compare( a, b, c,&largest);
  
     return 0;
}