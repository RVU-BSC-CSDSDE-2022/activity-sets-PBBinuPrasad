#include <stdio.h>
#include <math.h>

typedef struct point {
    float x,y;
} Point;


typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point(char *prompt_msg);
void input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);

int main()
{
    Polygon p;
    input_polygon(&p);
    find_perimeter(&p);
    output(p);
    return 0;
}

int input_n()
{
  int sides;
  printf("Enter the sides of the polygon\n");
  scanf("%d", &sides);
  return sides;
}

Point input_point(char *prompt_msg)
{
   printf("%s", prompt_msg);
   Point p;
   scanf("%f", &p.x);
   scanf("%f", &p.y);
   return p;
}

float find_distance(Point a, Point b)
{
    float distance;
    distance=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
    return distance;
}

void input_polygon(Polygon *p)
{
    p->sides=input_n();
    for(int i=0;i<(p->sides);i++)
      {
          p->p[i]=input_point("Enter x and y coordinate\n");
      }
    
}

void find_perimeter(Polygon* p)
{
    int i=0;
    for(i=0;i<((p->sides)-1);i++)
      {
       
        p->perimeter=(p->perimeter)+find_distance(p->p[i],p->p[i+1]);
       
      }
  
    p->perimeter=(p->perimeter)+find_distance(p->p[i],p->p[0]);
   
}

void output(Polygon p)
{
  printf("The perimeter of the polygon is %f", p.perimeter);
}