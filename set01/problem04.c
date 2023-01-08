#include <stdio.h>
#include <stdlib.h>
 int sum_func(int *x,int *y , int *sum);

int main() {
  int x, y,sum;
  printf("Enter the first number");
  if(scanf("%d", &x)!=1)
  {
    printf("error");
    exit(0);
  }
  printf("Enter second number");
  if(scanf("%d", &y)!=1)
  {
    printf("error");
    exit(0);
  }
  sum_func(&x, &y, &sum);
  printf("%d", sum);
  return 0;
  }

  sum_func(int *x, int *y, int *sum)

{
  
  *sum=*x+*y;
  
}