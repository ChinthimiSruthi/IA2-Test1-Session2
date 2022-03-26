#include <stdio.h>
int input_side()
{
  int a;
  printf("Enter a value\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  int equilateral,isosceles,scalene,r;
  if(a==b && b==c)
  {
    r = equilateral;
  }
  else if(a!=b && b==c && a==c)
  {
    r = isosceles;
  }
  else 
  {
    r = scalene;
  }
}
void output(int a,int b,int c,int scalene)
{
  if(a==b && b==c)
  {
    printf("Triangle is equilateral\n");
  }
  else if(a==b && b!=c && a!=c)
  {
    printf("Triangle is Isosceles\n");
  }
  else
  {
    printf("Triangle is Scalene\n");
  }
}
int main()
{
  int a,b,c,scalene;
  a=input_side();
  b=input_side();
  c=input_side();
  check_scalene(a,b,c);
  output(a,b,c,scalene);
  return 0;
}
