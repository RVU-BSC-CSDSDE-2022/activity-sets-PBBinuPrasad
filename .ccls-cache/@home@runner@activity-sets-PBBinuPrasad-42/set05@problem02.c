#include <stdio.h>
#include <math.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length,float weight);

int main(){
    float r,l,h,w;
    input_camel_details(&r,&h,&l);
    find_weight(r,h,l);
    output(r,h,l,w);
}

void input_camel_details(float *radius, float *height, float *length){
     printf("Enter the radius: \n");
     scanf("%f",radius);
     printf("Enter the height: \n");
     scanf("%f",height);
     printf("Enter the length: \n");
     scanf("%f",length);
     return 0;
}


float find_weight(float radius, float height, float length){
    float weight = 3.14 * radius * radius * radius * sqrt(height * length);
    return(weight);
}


void output(float radius, float height, float length, float weight){
      printf("The weight of the camel with %2.1f,%2.1f,%2.1f is %2.1f\n",radius,height,length,weight);
}