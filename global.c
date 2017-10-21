#include<stdio.h>
int a=25;
void glob(int a,int b)
{
 a=434343;
 b=1345;
 printf("%d %d",a,b);
}
int main()
{
 int a,b;
 b=14;
 printf("%d  %d",&a,&b);
 return 0;
}
