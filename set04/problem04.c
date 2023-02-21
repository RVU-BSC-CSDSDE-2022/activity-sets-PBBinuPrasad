#include <stdio.h>
#include <math.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main()
{
  int degree;
  degree=input_degree();
  float co_eff[degree+1], x,result=0;
  input_coefficients(degree, co_eff);
  x=input_x();
  result=evaluate_polynomial(degree, co_eff,x);
  output(degree,co_eff,x,result);
  return 0;
  }

int input_degree()
{
  int degree;
  printf("Enter the degree\n");
  scanf("%d", &degree);
  return degree;
}

void input_coefficients(int n, float a[n])
{
  for(int i=0;i<=n;i++)
    {
      printf("Enter the coeffecient\n");
      scanf("%f", &a[i]);
    }
}

float input_x()
{
  float x;
  printf("Enter the value of x\n");
  scanf("%f", &x);
  return x;
}

float evaluate_polynomial(int n, float a[n], float x)
{
  float result=0;
  for(int i=0;i<=n;i++)
    {
      result+=pow(x,i)*a[i];
    }
  return result;
}

void output(int n, float a[n], float x, float result)
{
  printf("H(%d,%d,%d) = ", n,(int)a[0],(int)(x));
  for(int i=0;i<=n;i++)
    {
      printf("%0.2f*%0.2f^%d ",a[0],x,i);
      printf("+");
    }
  printf(" = %f", result);
}