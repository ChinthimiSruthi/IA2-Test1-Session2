#include <stdio.h>
struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf("Enter base and altitude of a triangle\n");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
}
void input_n_triangles(int n, Triangle t[n])
{
   int i;
   for(i=0;i<n;i++)
   {
     t[i] = input_triangle();
   }
}
void find_area(Triangle *t)
{
  t->area = t->base*t->altitude;
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
  {
    find_area(&t[i]);
  }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle smallest;
  smallest.area = t[0].area;
  for(int i=0;i<n;i++)
    if(smallest.area >=t[i].area)
    {
       smallest.area=t[i].area;
       smallest.base=t[i].base;
       smallest.altitude=t[i].altitude;
    }
    return smallest;
}
void output(int n, Triangle t[n], Triangle smallest)
{
  for(int i=0;i<n;i++)
  {
    printf("Triangle with base = %f and altitude = %f is %f\n",t[i].base,t[i].altitude,t[i].area);
    printf("The area of triangle with base = %f and altitude = %f is %f\n",smallest.base,smallest.altitude,smallest.area);
  }
}
int main()
{
  int n;
  n=input_n();
  Triangle t[n],smallest;
  input_n_triangles(n,t);
  find_areas_n(n,t);
  smallest = find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}
