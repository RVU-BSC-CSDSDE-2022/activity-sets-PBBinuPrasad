#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
  int n,fibo;
  n = input();
  fibo = find_fibo(n);
  output(n,fibo);
}

int input(){
  int x;
  printf("Enter the  number");
  scanf("%d",&x);
  return x;
}

int find_fibo(int n)
{
  int f[n];
  int i;
  f[0] = 0;
  f[1] = 1;  
  for(i=2;i<=n;i++)
    {
      f[i] = f[i-1]+f[i-2];
    }
  return f[n];
}

void output(int n, int fibo)
{
  printf("The fibo of the given number is %d",fibo);
}