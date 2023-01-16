#include <stdio.h>
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
}