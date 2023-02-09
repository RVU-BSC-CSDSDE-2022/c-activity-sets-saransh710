//Write a program to find the length of a line

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line





Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);


Point input_point();{
  point p;
  printf("enter the x and y coordinates of points (x,y):");
  scanf("%f,%f",&p.x,&p.y);
  return p;
}
Line input_line() {
    Line l1;
    printf("Enter coordinates of the first point of the line: ");
    l.p1 = input_point();
    printf("Enter coordinates of the second point of the line: ");
    l.p2 = input_point();
    return l1;
}

void find_length(){
  //root x2-x1)^2+y2-y1)^2 root



  
}












int main(){
    Line l = input_line();
    find_length(&l);
    output(l);
    return 0;
  




  
}