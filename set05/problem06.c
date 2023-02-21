#include <stdio.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main(){
  int n;
  n=input_n();
  int a[n],avg;
  input(n,a);
  avg = odd_average(n,a);
  output(avg);
}

int input_n(){
   int n;
   printf("enter the size of the array\n");
   scanf("%d",&n);
   return(n);
}

void input(int n, int a[n]){
   int i;
  printf("Enter the elements of the array\n");
   for(i=0;i<n;i++){
     scanf("%d", &a[i]);
   }
}

float odd_average(int n, int a[n]){
  float sum = 0,av = 0,c = 0;
  for(int i = 0;i<n;i++){
    if((a[i]%2)!=0){
      c++;
      sum = sum+a[i];
    }
  }
  av = sum/c;
  return(av);
}

void output(float avg){
    printf("the average of odd elememts is %f",avg);
}