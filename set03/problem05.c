#include <stdio.h>

int input() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  return num;
}

//int find_gcd(int a, int b) {
  //int remainder;
  //while (b != 0) {
    //remainder = a % b;
   // a = b;
    //b = remainder;
  //}
  //return a;
//}
int find_gcd(int a, int b){
  int gcd,i;
for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }  
  return gcd;
  }


//    while(n1!=n2)
    //{
        //if(n1 > n2)
      //      n1 -= n2;
    //    else
  //          n2 -= n1;
//    }

void output(int a, int b, int gcd) {
  printf("The GCD of %d and %d is %d\n", a, b, gcd);
}

int main() {
  int num1, num2, gcd;
  num1 = input();
  num2 = input();
  gcd = find_gcd(num1, num2);
  output(num1, num2, gcd);
  return 0;
}
