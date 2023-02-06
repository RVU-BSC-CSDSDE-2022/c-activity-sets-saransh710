#include <stdio.h>

void input_string(char *string1, char *string2){
    printf("Enter the first string: ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
}

int compare(char *string1, char *string2){
    int i;
    for(i = 0; string1[i] != '\0' && string2[i] != '\0'; i++){
        if(string1[i] != string2[i]){
            return string1[i] - string2[i];
        }
    }
    return 0;
}

void output(int res){
    if(res == 0){
        printf("The strings are equal\n");
    }
    else{
        printf("The strings are not equal\n");
    }
}

int main(){
    char string1[100], string2[100];
    int res;
    input_string(string1, string2);
    res = compare(string1, string2);
    output(res);
    return main();
}