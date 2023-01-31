#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter the radius, height, and length separated by a space: ");
    scanf("%f %f %f", radius, height, length);
}

float find_weight(float radius, float height, float length) {
    float pi = 3.14, weight;
    weight = pi * pow(radius, 3) * sqrt(height * length);
    return weight;
}

void output(float radius, float height, float length, float weight) {
    printf("The weight of a camel with radius %.2f, height %.2f, and length %.2f is %.2f\n", radius, height, length, weight);
}

int main() {
    float radius, height, length, weight;
    input_camel_details(&radius, &height, &length);
    weight = find_weight(radius, height, length);
    output(radius, height, length, weight);
    return 0;
}
