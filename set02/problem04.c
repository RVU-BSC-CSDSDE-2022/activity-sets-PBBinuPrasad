#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int is_composite(int x);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main() {
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(sum);
  return 0;
}

int input_array_size() {
  int a;
  printf("enter array size");
  scanf("%d", &a);
  return a;
}

void input_array(int n, int a[n]) {
  int i;
  printf("enter the numbers");
  for(i=0;i<n;i++) {
  scanf("%d", &a[i]);
  } 
}

int sum_composite_numbers(int n, int a[n]){
  int i, count = 0,sum=0;
  for(i= 0;i < n;i++){
    count = is_composite(a[i]);
    if(count == 1)
      sum = sum+a[i];
    }
  return(sum);
}

int is_composite(int x){
  int count=0;
  for(int i = 1;i<=x;i++){
    if(x%i == 0){
      count++;
      if(count == 3){
        return(1);
      }
    }
  }
  return(0);
}

void output(int sum) {
  printf("the sum of composite numbers is %d", sum);
}