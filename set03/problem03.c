#include<stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);

int main(){
  int n,result;
  n = input_number();
  result = is_prime(n);
  output(n,result);
  return 0;
}

int input_number(){
  int x;
  printf("Enter the value");
  scanf("%d",&x);
  return x;
}

int is_prime(int n){
  int ans,i,cnt;
  ans = 0;
  cnt = 0;
  for(i=1;i<n;i++)
    {
      if(n%i==0){
        cnt++;
    
      }
    }
  if(cnt>=2){
    ans = 0;
  }
  else{
    ans =1;
  }
  return (ans);
}

void output(int n, int result)
{
  if(result == 1)
  {
    printf("%d is  prime number\n",n);
  }
  else
  {
    printf("%d is a not prime number\n",n);
  }
}