#include<stdio.h>
void max(int a,int b)
{
 int max;
 if(a>b)
    max=a;
 else
    max=b;
}
void call(int a,int b)
{
// int max;
 max(a,b);
 printf("%d",max);
}
int main()
{
 int a=10,b=20;
 int max;
 call(a,b);
 return 0;
}
