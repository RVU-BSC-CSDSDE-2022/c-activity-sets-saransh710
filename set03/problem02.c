#include <stdio.h>

int input_side() {
    int side;
    printf("Enter side length: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    if (a != b && a != c && b != c) {
        return 1;
    }
    else {
        return 0;
    }
}

void output(int a, int b, int c, int isscalene) {
    if (isscalene) {
        printf("This is a scalene triangle.\n");
    }
    else {
        printf("This is not a scalene triangle.\n");
    }
}

int main() {
    int a = input_side();
    int b = input_side();
    int c = input_side();
    int isscalene = check_scalene(a, b, c);
    output(a, b, c, isscalene);
    return 0;
}
