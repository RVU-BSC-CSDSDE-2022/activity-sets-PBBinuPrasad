#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main(){
  float x1,x2,y1,y2,distance;
  input(&x1,&y1,&x2,&y2);
  distance = find_distance(x1,y1,x2,y2);
  output(x1,y1,x2,y2,distance);
}

void input(float *x1, float *y1, float *x2, float *y2){
  printf("Enter the x1 point");
  scanf("%f",x1);
  printf("Enter the y1 point");
  scanf("%f",y1);
  printf("enter the x2 point");
  scanf("%f",x2);
  printf("enter the y2 point");
  scanf("%f",y2);
}

float find_distance(float x1, float y1, float x2, float y2){
  float distance;
  distance = ( ((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)) );
  return distance;
}

void output(float x1, float y1, float x2, float y2, float distance){
   printf("The distance between (%.2f,%.2f)and (%.2f,%.2f) is %.2f",x1,y1,x2,y2,distance);
}