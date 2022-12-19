

#include<stdio.h>
#include<math.h>
float height(float h)
{
	return h;
}
float length(float l)
{
	return l;
}
float radius(float r)
{
	return r;
}
float weight(float h,float l,float r)
{
	float w;
	w=h*l*3.14*r*r*r;
	return w;
}
int main()
{
	float h,l,r,w;
	printf("enter the height of the camel\n");
	scanf("%f",&h);
	printf("enter the length of the camel\n");
	scanf("%f",&l);
	printf("enter the radius of the stomach\n");
	scanf("%f",&r);
	w=weight(height(h),length(l),radius(r));
	printf("the weight of the camel is %f\n",w);
	return 0;
} 