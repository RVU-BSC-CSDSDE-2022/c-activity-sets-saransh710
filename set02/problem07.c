#include <stdio.h>

void input(char *name) {
    printf("Enter the name of the camel: ");
    scanf("%s", name);
}

int has_nice_name(char *c) {
    int i, vowels = 0, consonants = 0;
    for (i = 0; c[i] != '\0'; i++) {
        if (c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U' || c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u') {
            vowels++;
        } else if ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z')) {
            consonants++;
        }
    }

    if (vowels >= 2 && consonants >= 2) {
        return 1;
    } else {
        return 0;
    }
}

void output(int res) {
    if (res==1) {
        printf("The name of the camel is a nice name.\n");
    } else {
        printf("The name of the camel is not a nice name.\n");
    }
}

int main() {
    char name[100];
    int res;

    input(&name);
    res = has_nice_name(name);
    output(res);

    return 0;
}
