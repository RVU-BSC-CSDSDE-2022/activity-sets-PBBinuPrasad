#include <stdio.h>
void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main() {
  float base,height,area;
  input(base, height);
  return 0;
}
void input(float base, float height) {
  float area;
  printf("enter base of triangle");
  scanf("%f", &base);
  printf("enter height of a triangle");
  scanf("%f", &height);
  find_area(base,height,&area);
  output(base,height,area);
}

void find_area(float base , float height, float *area) {
  *area = 0.5*base*height;
}

void output(float base, float height, float area) {
  printf("the area of base %f, height %f is %f",base,height,area);
}