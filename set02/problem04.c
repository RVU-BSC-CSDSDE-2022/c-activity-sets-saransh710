#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter the stomach radius: ");
    scanf("%f", radius);
    printf("Enter the height: ");
    scanf("%f", height);
    printf("Enter the length: ");
    scanf("%f", length);
}

int find_mood(float radius, float height, float length) {
    if (radius < height && radius < length) {
        return 1;
    } else if (height < length && height < radius) {
        return 2;
    } else if (length < height && length < radius) {
        return 3;
    } else {
        return 0;
    }
}

void output(float radius, float height, float length, int mood) {
    switch (mood) {
        case 1:
            printf("Camel is sick.\n");
            break;
        case 2:
            printf("Camel is happy.\n");
            break;
        case 3:
            printf("Camel is tense.\n");
            break;
        default:
            printf("Camel mood is unknown.\n");
            break;
    }
}

int main() {
    float radius, height, length;
    int mood;

    input_camel_details(&radius, &height, &length);
    mood = find_mood(radius, height, length);
    output(radius, height, length, mood);

    return 0;
}
