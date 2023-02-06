#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b) {
    printf("Enter the string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}
int sub_str_index(char* string, char* substring) {
    int i, j, string_len, substring_len;
    string_len = strlen(string);
    substring_len = strlen(substring);
    for (i = 0; i <= string_len; i++) {
        for (j = 0; j < substring_len; j++) {
            if (string[i + j] != substring[j])
                break;
        }
        if (j == substring_len)
            return i;
    }
    return -1;
}

void output(char *string, char *substring, int index) {
    if (index == -1)
        printf("Substring '%s' not found in string '%s'\n", substring, string);
    else
        printf("Substring '%s' found at index %d in string '%s'\n", substring, index, string);
}

int main() {
    char string[100], substring[100];
    int index;
    input_string(string, substring);
    index = sub_str_index(string, substring);
    output(string, substring, index);
return main();
}