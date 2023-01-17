#include <stdio.h>
int input();
int compare(int a , int b , int c);
void output(int a , int b , int c , int largest);

int main() {
  int a,b,c,l;
  a = input();
  b = input();
  c = input();
  l = compare(a , b , c);
  output(a , b , c , l);
  return 0;
}

int input() {
  int x;
  printf("Enter the number\n");
  scanf("%d", &x);
  return x;
}

int compare(int a , int b , int c) {
  if ((a>c) && (a>b))
    return a;
  if((b>a) && (b>c))
    return b;
  if((c>a) && (c>b))
    return c;
  }

void output(int a , int b , int c , int largest) {
  printf("the largest of %d,%d,%d is %d" , a,b,c,largest);
}