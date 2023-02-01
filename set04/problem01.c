
#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

void input(float *x1,float *y1,float *x2,float *y2){
  printf("enter the x and y cordinates for the first point seprated by a space ");
  scanf("%f %f",x1,y1);
  printf("enter the x and y cordinates for the second point seprated by a space");
  scanf("%f %f",x2,y2);
}

float find_distance(float x1,float x2,float y1,float y2){
float res;
  res=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  
return res;
}


int main()
{
	float x1,x2,y1,y2,res;
	input(&x1,&y1,&x2,&y2);
  res=find_distance(x1,x2,y1,y2);
	printf("distance between two points is %f",res);
	return 0;
}