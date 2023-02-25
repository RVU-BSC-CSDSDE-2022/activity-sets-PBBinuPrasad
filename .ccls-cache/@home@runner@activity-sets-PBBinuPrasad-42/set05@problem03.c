#include <stdio.h>
#include <math.h>
struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;
Camel input();
void  find_weight(Camel *c);
void  output(Camel c);

int main(){
   Camel c;
   c = input();
   find_weight(&c);
   output(c);
   return 0;
}
    
Camel input(){
   Camel c;
    printf("Enter the radius of camel\n");
    scanf("%f",&c.radius);
    printf("Enter the height of camel\n");
    scanf("%f",&c.height);
    printf("Enter the length of camel\n");
    scanf("%f",&c.length);
    return (c);
}

void find_weight(Camel *c){
    c->weight = 3.14 * c->radius * c->radius * c->radius * sqrt(c->height * c->length);
}

void output(Camel c){
      printf("The weight of the camel with %2.2f,%2.2f,%2.2f is %2.4f\n",c.radius,c.height,c.length,c.weight);
}