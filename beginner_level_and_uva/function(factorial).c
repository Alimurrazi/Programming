#include<stdio.h>
int fact(int a,int i)
{
 int f1=1;
 for(i=1;i<=a;i++)
 {
  f1=f1*i;}
return f1;
}
int main()
{
 int a=5,b,i;
 b=fact(a,i);
 printf("%d",b);
 return 0;
}
