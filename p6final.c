#include <stdio.h>
void input_string (char *a)
{
  printf (" Enter the string \n");
  scanf ("%s",a);
}
int string_length (char *a)
{
  int j = 0;
  while (a[j] != '\0')
  {
    j++;
  }
  return j;
}
void revstr (char *a)
{
  int i,length, t;
  length = string_length(a);
  for (i=0; i<length/2;i++)
    {
      t = a[i];
      a[i] = a[length-1 - i ];
      a[length-1 - i] = t;
    }
}
void output (char *a)
{
  printf ("The reverse of string is %s\n",a);
}
int main ()
{
  char a[50];
  input_string (a);
  revstr(a);
  output(a);
  return 0;
}
