#include <stdio.h>
#include <math.h>

typedef struct _camel {
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter the radius, height and length of Camel %d: ", i+1);
        scanf("%f %f %f", &c[i].radius, &c[i].height, &c[i].length);
    }

    printf("Enter the weight of the truck: ");
    scanf("%f", truck_weight);
}

void find_camel_weight(int n, Camel c[n]) {
    int i;
    float volume;
    for (i = 0; i < n; i++) {
        volume = (4.0/3.0) * M_PI * pow(c[i].radius, 3);
        c[i].weight = volume * 0.05;
    }
}

float compute_total_weight(int n, Camel c[n], float truck_weight) {
    int i;
    float weight_of_camels = 0;

    for (i = 0; i < n; i++) {
        weight_of_camels += c[i].weight;
    }

    return weight_of_camels + truck_weight;
}

void output(float total_weight) {
    printf("The total weight of the truck is: %.2f\n", total_weight);
}

int main() {
    int n;
    Camel c[100];
    float truck_weight;
    float total_weight;

    printf("Enter the number of camels: ");
    scanf("%d", &n);

    input(n, c, &truck_weight);
    find_camel_weight(n, c);
    total_weight = compute_total_weight(n, c, truck_weight);
    output(total_weight);

    return 0;
}
