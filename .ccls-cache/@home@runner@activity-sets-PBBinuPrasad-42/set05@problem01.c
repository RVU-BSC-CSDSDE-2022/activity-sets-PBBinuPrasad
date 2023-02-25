#include <stdio.h>
#include <math.h>
struct _point {
  float x;
  float y;
};

typedef struct _point Point;
Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main(){
  Point a,b;
  printf("Enter the values of the point x1 and y1\n");
  a = input();
  printf("Enter the values of the point x2 and y2\n");
  b = input();
  float res;
  dist(a,b,&res);
  output(a,b,res);
}

Point input(){
  Point a;
  scanf("%f%f", &a.x, &a.y);
  return(a);
}
void dist(Point a, Point b, float *res){
  *res = sqrt(pow((b.x-a.x),2) + pow((b.y-a.y),2));
}

void output(Point a, Point b, float res){
  printf("The Distance between (%2.1f,%2.1f) and (%2.1f,%2.1f) is %2.1f",a.x,b.x,a.y,b.y,res);
}