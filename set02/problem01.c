
#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,d;
	printf("enter the value of x1,x2,y1,y2");
	scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("distance between two points is %f",d);
	return 0;
}