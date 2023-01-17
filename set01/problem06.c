#include <stdio.h>
int input();
int compare(int a , int b , int c , int * largest);
void output(int a , int b , int c , int largest);

int main() {
  int a,b,c,l;
  a = input();
  b = input();
  c = input();
  l = compare(a , b , c , &l);
  output(a , b , c , l);
}

int input() {
  int x;
  printf("Enter the number\n");
  scanf("%d", &x);
  return x;
}

int compare(int a , int b , int c , int * largest) {
  if(a>b)
  {
    if(a>c){*largest = a;}
    else{*largest = c;}
    
  }
    else
     {
    if(b>c){*largest = b;}
    else{*largest = c;}
     }
  }

void output(int a , int b , int c , int largest) {
  printf("the largest of %d,%d,%d is %d" , a,b,c,largest);
}