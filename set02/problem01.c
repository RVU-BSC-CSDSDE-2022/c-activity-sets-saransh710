#include <math.h>
#include <stdio.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input() {
  Point p;
  printf("Enter the x and y coordinates of the point: ");
  scanf("%f %f", &p.x, &p.y);
  return p;
}

void dist(Point a, Point b, float *res) {
  *res = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void output(Point a, Point b, float res) {
  printf("The distance between the points (%0.2f, %0.2f) and (%0.2f, %0.2f) is %0.2f\n",
         a.x, a.y, b.x, b.y, res);
}

int main() {
  Point a = input();
  Point b = input();
  float result;
  dist(a, b, &result);
  output(a, b, result);
  return 0;
}
