#include <stdio.h>
int input()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int find_gcd(int a,int b)
{
  int i,t,gcd;
  if(a>b)
  {
    t = a;
    a = b;
    b = t;
  }
  if(b%a == 0)
  {
    return a;
  }
  for(i=2;i<a/2;i++)
  {
    if(a%i == 0 && b%i == 0)
    {
      gcd = a;
    }
  }
  return gcd;
}
void output(int a,int b,int gcd)
{
  printf("G.C.D of %d and %d is %d\n",a,b,gcd);
}
int main()
{
  int a,b,gcd;
  a=input();
  b=input();
  gcd=find_gcd(a,b);
  output(a,b,gcd);
  return 0;

}
