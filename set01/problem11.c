#include<stdio.h>
struct complex {
	float real;
	float img;
};
typedef struct complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main(){
  Complex a,b,sum;
  a = input_complex();
  b = input_complex();
  sum = add_complex(a,b);
  output(a,b,sum);
}

Complex input_complex(){
  Complex a;
  printf("Enter a and b where a + ib is the first complex number.\n");
   scanf("%f%f", &a.real, &a.img);
  return(a);
}

Complex add_complex(Complex a, Complex b){
  Complex sum;
  sum.real = a.real+b.real;
  sum.img = a.img+b.img;
  return(sum);
}

void output(Complex a, Complex b, Complex sum){
  printf("The sum of %f+%fi and %f+%fi is %f+%fi",a.real,a.img,b.real,b.img,sum.real,sum.img);
}