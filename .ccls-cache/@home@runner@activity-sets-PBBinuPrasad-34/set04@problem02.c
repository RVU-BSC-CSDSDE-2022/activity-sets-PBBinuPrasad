#include <stdio.h>

typedef struct {
  int num, den;
} Fraction;

int main() {
  Fraction a = {1, 2};
  Fraction b = {1, 3};
  Fraction c = {1, 4};
  Fraction min = min_fraction(a, b, c);
  printf("The smallest fraction is %dd%", min.num, min.den);
  return 0;
}

Fraction min_Fraction(Fraction a, Fraction b, Fraction c) {
  Fraction min = a;
  if ((float)b.num / b.den < (float)min.num / min.den)
    min = b;
  if ((float)c.num / c.den < (float)min.num / min.den)
    min = c;
  return min;
}