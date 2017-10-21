#include<stdio.h>
int swap(int a,int b)
{
 a=a+b-a;
 b=a+b-b;
 return a;
}
int main()
{
 int a=10;int b=20,c;
 c=swap(a,b);
 printf("%d%d",a,b);
 return 0;
}
