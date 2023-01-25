void input_string(char *string1, char *string2);
int compare(char *string1, char *string2);
void output(char *string1, char  *string2, int result);

void input_string(char *string1,char*string2){
printf(“enter the first string”);
scanf(“%s”,string1);
printf(“enter the second string”)
scanf(“%s”,string2)

}




void compare(char *string1,char *string2,int res){
Int i;
for (i=0;string1[i]@!=’\0’||string2[i]!=’\0’;i++){
if (string1[i] != string2[i]){
return (string1[i]-string2[i]);


}
return 0;
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
/*#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, j, len1, len2;
    int flag = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
        {
            if (str1[i] != str2[i])
            {
                flag = 1;
                break;
            }
        }
    }
    else
    {
        flag = 1;
    }

    if (flag == 1)
    {
        printf("Strings are not equal\n");
    }
    else
    {
        printf("Strings are equal\n");
    }

    return 0;
}
*/





/*#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
   char string1[100], string2[100];
   int result=0;
    input_two_strings(string1, string2);
    result=stringcompare(string1, 
    string2);
    output(string1, string2, result);
     return 0;
}
void input_two_strings(char *string1, char *string2)
{
  printf("Enter the first string\n");
  scanf("%s", string1);
  printf("Enter the second string\n");
  scanf("%s", string2);
}

int stringcompare(char *string1, char *string2)
{
    int result=0,i=0,flag=0;
    while(string1[i]!='\0' && string2[i]='\0')
      {
          if(string1[i]!=string2[i])
          {
            flag=1;
            break;
          }
      }

  if(flag==0)
  {
     if(string1[i]=='\0' && string2[i]=='\0')
       return 0;
    if(string1[i]=='\0')
      return 1;
    if(string2[i]=='\0')
      return 2;
  }

  if(flag==1)
  {
    if(string1[i]>string2[i])
      return 1;
    else return 2;
  }
}

void output(char *string1, char *string2, int result)
{
   if(result==0)
     printf("Strings are equal\n");
   if(result==1)
     printf("%s is greater\n", string1);
  if(result==2)
    printf("%s is greater\n", string2);
  }
*/
