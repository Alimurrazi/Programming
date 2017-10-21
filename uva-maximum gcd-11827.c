#include<stdio.h>
int gcd(int a,int b)
{
  if(a==0)
    return b;
  else
    return(b%a,a);
}
int main()
{
  printf("%d",gcd(20,40));
}
