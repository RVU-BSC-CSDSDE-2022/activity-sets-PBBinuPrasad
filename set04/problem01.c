#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
int find_gcd(int res_num,int res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main()
{
  int num1,den1,num2,den2,res_num,res_den;
  int gcd;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&res_num,&res_den);
  gcd =find_gcd(res_num,res_den);
  output(num1,den1,num2,den2,res_num,res_den);
  return 0;
}

void input(int *num1, int *den1, int *num2 , int *den2)
{
  printf("Enter num1");
  scanf("%d",num1);
  printf("Enter den1");
  scanf("%d",den1);
  printf("Enter num2");
  scanf("%d",num2);
  printf("Enter den2");
  scanf("%d",den2);
}

void add(int num1 ,int den1, int num2,int den2,int *res_num , int *res_den)
{
 *res_num = (num1*den2)+(num2*den1);
*res_den = (den1*den2); 
  }

int find_gcd(int res_num,int res_den)
{
  int i,gcd;
  for (i=1;i<=res_num&&i<=res_den;i++)
    {
      if(res_num%i == 0 && res_den%i == 0)
      {
        gcd = i;
      }
    }
  return gcd;
}

void output(int num1,int den1,int num2 , int den2, int res_num,int res_den)
{
  int gcd;
  gcd= find_gcd(res_num,res_den);
  res_num = res_num/gcd;
  res_den = res_den/gcd;
  if(res_num == res_den)
  {
    printf("%d/%d + %d/%d = %d",num1,den1,num2,den2,1);
  }
  else
  {printf(" %d/%d + %d/%d = %d/%d",num1,den1,num2,den2,res_num,res_den);
    }
}