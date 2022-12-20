 #include <stdio.h>

int main() {
   int a, b, c;
     
     printf(" Enter first Value ");
     scanf("%d", &a) ;
     printf(" Enter second Value ") ;
     scanf("%d", &b) ;
     printf(" Enter third Value ") ;
     scanf("%d", &c) ;

       if ( a > b && a > c )
      printf("%d ", a);
     else if ( b > a && b > c )
      printf("%d ", b);
      else if ( c > a && c > b )
      printf("%d", c);
      else   
      printf("Values are not unique");

   return 0;
}