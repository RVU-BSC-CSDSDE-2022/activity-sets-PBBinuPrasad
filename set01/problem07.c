# include <stdio.h>
# include <stdlib.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main() {
  int n , sum;
  n = input_n();
  sum = sum_n_nos(n);
  output(n , sum);
}

int input_n() {
  int x;
  printf("Enter the number");
  if(scanf("%d" , &x)!=1)
  {
    printf("error");
    exit(0);
  }
  return(x);
}

int sum_n_nos(int n) {
  n = (n*(n+1))/2;
  return (n);
}

void output(int n , int sum) {
  printf("the sum of %d natural number is %d",n,sum);
}