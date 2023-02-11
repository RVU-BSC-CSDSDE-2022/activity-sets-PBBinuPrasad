#include <stdio.h>
#include <math.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
  int n;
  n=input_array_size();
  int a[n+1];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
  return 0;
}


int input_array_size()
{
  int n;
  printf("Enter the range of numbers\n");
  scanf("%d", &n);
  return n;
}

void init_array(int n, int a[n])
{
     for(int i=0;i<n;i++)
       a[i]=1;
}

void erotosthenes_sieve(int n, int a[n])
{
     int i=0;
     for(i=2;i<(n);i++)
       {
          if(a[i]!=0)
          {
          for(int j=i;j<=(n/i);j++)
            {
              a[(i*j)]=0;
            }
          }
       }
  
}

void output(int n, int a[n])
{
    for(int i=2;i<n;i++)
      {
        if(a[i]==1)
          printf("%d ", i);
      }
      
}