#include<math.h>
#include<stdio.h>

struct camel {
	float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input() {
	Camel c;
	printf("Enter the radius of the stomach: ");
	scanf("%f", &c.radius);
	printf("Enter the height of the camel: ");
	scanf("%f", &c.height);
	printf("Enter the length of the camel: ");
	scanf("%f", &c.length);
	return c;
}

void find_weight(Camel *c) {
	c->weight = M_PI * pow(c->radius, 3) * sqrt(c->height * c->length);
}

void output(Camel c) {
	printf("The weight of the camel is: %.2f kg\n", c.weight);
}

int main() {
	Camel c = input();
	find_weight(&c);
	output(c);
	return 0;
}
