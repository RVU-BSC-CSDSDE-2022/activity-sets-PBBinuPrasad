#include<stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main(){
int n,r,result;
input_n_and_r(&n,&r);
result=nCr(n,r);
output(n,r,result);
}
void input_n_and_r(int *n, int *r){
printf("Enter n \n");
scanf("%d",n);
printf("Enter r \n");
scanf("%d",r);
}

int nCr(int n, int r){
int result;
int factorial(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f;
}
result=factorial(n)/(factorial(r)*factorial(n-r));
return result;
}
void output(int n, int r, int result){
printf("the value of nCr = %d\n",result);
}