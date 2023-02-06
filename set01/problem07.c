int input_n();
int sum_n_nos(int n);
void output(int n, int sum);


int input_n(){
int x;
printf(“enter the value of n :”)
scanf(“%d”,&x);
Return x;


}

int sum_n_nos(int n){
int sum=0;
For(int i=1;i<=n;i++){	
  sum+=i;
}
return sum;
}


int main(){
int n,sum;
n=input_n();
sum=sum_n_nos(n);
output(sum);
return 0;

}
/*#include <stdio.h>
int main()
{
  int input_n, sum_n_nos = 0, x, value;
 
  printf("How many numbers you want to add?\n");
  scanf("%d", &input_n);
 
  printf("Enter %d integers\n", input_n);
 
  for (x = 1; x <= input_n; x++)
  {
    
    sum_n_nos = sum_n_nos + x;
  }
 
  printf("Sum of the integers = %d\n", sum_n_nos);
 
  return 0;
}*/