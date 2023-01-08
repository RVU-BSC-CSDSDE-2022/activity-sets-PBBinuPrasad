#include <stdio.h>
# include <stdlib.h>

int main() {
  int a, b,sum;
  printf("Enter the first number");
  if(scanf("%d", &a)!=1)
    {
    printf("error");
    exit(0);
    }
  printf("Enter second number");
  if(scanf("%d", &b)!=1)
  {
    printf("error");
    exit(0);
  }
  sum=sum_func(a,b);
  printf("%d", sum);

  return 0;
  }
 int sum_func(int a, int b)
{
  int sum;
  sum=a+b;
  return sum;
}