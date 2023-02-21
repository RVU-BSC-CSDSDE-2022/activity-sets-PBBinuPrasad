#include<stdio.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main(){
   float radius,height,length,mood;
   input_camel_details(&radius,&height,&length);
   mood = find_mood(radius,height,length);
   output(radius,height,length,mood);
   return  0;
}

void input_camel_details(float *radius, float *height, float *length){
  printf("Enter the radius of camel\n");
  scanf("%f",radius);
  printf("Enter the height\n");
  scanf("%f",height);
  printf("Enter the length\n");
  scanf("%f",length);
}

int find_mood(float radius, float height, float length)
{
  if((radius<height) && (radius<length))
  {
  return 1;
  }
  else if((height<radius) && (height<length))
  {
    return 2;
  }
  else 
  {
    return 3;
  }
}

void output(float radius, float height, float length, int mood){
  if(mood==1) 
  {
    printf("the Camel is Sick");
  }
   else if(mood==2)
  {
    printf("the Camel is Happy");
  }
  else
  {
    printf("The Camel is Tense");
  }
}