#include<stdio.h>
void abc(int a,int b,int *div,int *sum)
{
 //*sum=a+b;
 *div=a/b;
 *sum=a+b;
}
int main()
{
 int a=6,b=2,sam,dev;
 abc(a,b,&dev,&sam);
 printf("%d %d",dev,sam);
 return 0;
}
