#include <stdio.h>
int input_number()
{
  int n;
  printf("Enter size\n");
  scanf("%d",&n);
  return 0;
}
int is_composite(int n)
{
  
}
void output(int n,int composite)
{
  printf("%d is a composite number\n",composite);
}
int main()
{
  int a,n,composite;
  input_number();
  is_composite(n);
  output(n,composite);
  return 0;
}