float srt(float inte){
float a =1 ,b=0;
for(int i=0;i<10000000;i++){
b=inte/a;
a=(b+a)/2;
if(a==b)
 break;
}
return a;

}

float input(){
float y;
printf(“enter the number ”);
scanf("%f",&y);
return y;
}

void output(float inte, float res){
printf("the square root of %d is %f",inte,res);

}



int main(){
float inte,res;
inte=input();
res=srt(inte);
output(inte,res)
Return 0;
/*#include <stdio.h>
#include <math.h> 

double square_root(double num);

int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Square root of %.2f = %.2f", num, square_root(num));
    return 0;
}

double square_root(double num)
{
    return sqrt(num);
}*/