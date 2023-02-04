#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3) {
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%f%f", x1, y1);
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%f%f", x2, y2);
    printf("Enter the coordinates of the third point (x3 y3): ");
    scanf("%f%f", x3, y3);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3) {
    float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    float b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    float c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    return (a + b > c) && (a + c > b) && (b + c > a);
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int result) {
    if (result) {
        printf("The points (%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f) form a triangle.\n", x1, y1, x2, y2, x3, y3);
    } else {
        printf("The points (%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f) do not form a triangle.\n", x1, y1, x2, y2, x3, y3);
    }
}

int main() {
    float x1, y1, x2, y2, x3, y3;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    int result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);
    return 0;
}
