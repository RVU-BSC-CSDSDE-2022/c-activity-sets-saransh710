#include <stdio.h>

int input(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int is_composite(int a) {
    int i;
    if (a <= 1) return 0;
    for (i = 2; i < a; i++) {
        if (a% i == 0) {
            return 0;
        }
    }
    return 1;
}

void output(int a, int composite) {
    printf("Number: %d\n", a);
    if (composite == 0) {
        printf("%d is a composite number\n", a);
    } else {
        printf("%d is not a composite number\n", a);
    }
}
int main(){
int a,composite;
a=input();
composite=is_composite( a);
output(a,composite);
return 0;



  
}