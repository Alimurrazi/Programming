#include<stdio.h>
void sum(int a,int b,int c)
{
 a=13;
 b=34;
 c=a+b;
 printf("%d %d",a,b);
}
int main()
{
  int a,b,c;
 sum(a,b,c);
 return 0;
}
