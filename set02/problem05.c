#include <stdio.h>
#include <math.h>

int input(int x) {
    printf("Enter the value of x: ");
    scanf("%d", &x);
    return x;
}

//float borga_X(int x) {
  //  int i = 1;
    //float result = 1;
    //float term = 1;

//    while (fabs(term) >= 0.000001) {
  //      term = pow(x, i) / (2 * i + 1);
    //    result += term;
      //  i++;
    //}

    //return result;
//}

float borga_X(int x) {
    int i;
    float result = 1;
    float term = 1;

    for (i = 1; fabs(term) >= 0.000001; i++) {
        term = pow(x, i) / (2 * i + 1);
        result += term;
    }

    return result;
}

void output(int x, float result) {
    printf("borga(%d) = %f\n", x, result);
}

int main() {
    int x;
    float result;

    x = input(x);
    result = borga_X(x);
    output(x, result);

    return 0;
}
