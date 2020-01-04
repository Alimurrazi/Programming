#include<stdio.h>
char binary(int n)
{
  char str[100];
  int i=0,j,k,l;
  while(n!=0)
  {
   str[i]=n%2+'0';
   n=n/2;
  }
  return *str;
}
int main()
{
  int n=2;
  printf("%s ",binary(n));
}
