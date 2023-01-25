void input_string(char *string1, char *string2);
int compare(char *string1, char *string2);
void output(char *string1, char  *string2, int result);

Void input_string(char *string1,char*string2){
printf(“enter the first string”);
scanf(“%s”,string1);
printf(“enter the second string”)
scanf(“%s”,string2)

}




void compare(char *string1,char *string2,int res){
int i;
for (i=0;string1[i]@!=’\0’||string2[i]!=’\0’;i++){
if (string1[i] != string2[i]){
return (string1[i]-string2[i]);


}
Return 0;
}
Void output(char *string1,char *string2,int result){
if (result==0){
printf(“the string are equal)
}
if(result==1){
printf(“the string are equal”)
}
}

}
int main(){
Char string1[100],string2[100];
int result;
input_string(string1,string2);
result=compare(string1,string2,res);
output(string1,string2,result);

return 0;
}
