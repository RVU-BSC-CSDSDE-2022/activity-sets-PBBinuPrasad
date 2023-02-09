#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main(){
  float x1,y1,x2,y2,x3,y3,result;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result = is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
}

void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter the x1 point");
  scanf("%f",x1);
  printf("Enter the y1 point");
  scanf("%f",y1);
  printf("Enter the x2 point");
  scanf("%f",x2);
  printf("Enter the y2 point");
  scanf("%f",y2);
  printf("Enter th x3 point");
  scanf("%f",x3);
  printf("Enter th y3 point");
  scanf("%f",y3);
}

int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int ans;
  float check;
  check = 0.5*(x1*(y2-y3)+x2*(y3-y2)+x3*(y1-y2));
  if(check == 0)
  {
    ans = 0;
  }
  else
  {
   ans = 1;
  }
  return ans;
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  if (result == 0)
  {
    printf("the given points (%.2f ,%.2f) (%.2f , %.2f) (%.2f , %.2f) doesn't form a triangle \n",x1,y1,x2,y2,x3,y3);
  }
  else
  {
     printf("the given points (%.2f ,%.2f) (%.2f , %.2f) (%.2f , %.2f)  form a triangle \n",x1,y1,x2,y2,x3,y3);
  }
}