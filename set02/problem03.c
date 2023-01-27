struct camel {
    float radius;
    float height;
    float length;
    float weight;
};

typedef struct camel Camel;

Camel input(){
    Camel c;
    printf("Enter radius: ");
    scanf("%f", &c.radius);
    printf("Enter height: ");
    scanf("%f", &c.height);
    printf("Enter length: ");
    scanf("%f", &c.length);
    printf("Enter weight: ");
    scanf("%f", &c.weight);
    return c;
}

float find_weight(Camel c){  //pass by value
    return c.weight;
}

void find_weight(Camel *c){ //passing address variable
    printf("Weight: %f", c->weight);
}

void output(Camel c){
    printf("Radius: %f\n", c.radius);
    printf("Height: %f\n", c.height);
    printf("Length: %f\n", c.length);
    printf("Weight: %f\n", c.weight);
}
