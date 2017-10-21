#include<stdio.h>
double add(double n1,double n2)
{
 double sum=n1+n2;
 return sum;
}
int main()
{
 double a,b,plus;
 a=2.4;
 b=5.4;
 plus=add(a,b);
 printf("%lf",plus);
 return 0;
}
