#include<stdio.h>
int input_number()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i=2;
  while(i<=n/2)
  {
    if(n%i==0)
     return 1;
     i++;
  }
  return 0;
}
void output(int n,int is_composite)
{
  if(is_composite)
  {
    printf("%d is a composite number\n",n);
  }
  else
  {
    printf("The number is not composite\n");
  }
}
int main()
{
 int n=input_number();
 int composite= is_composite(n);
 output(n,composite);
 return 0;
}