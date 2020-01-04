#include<stdio.h>
void abc(int a,int b,int *p,int *q)
{
 //p=&a;
 //q=&b;
 *p=(a+b)-a;
 *q=(a+b)-b;
 printf("%d  %d",*p,*q);
}
int main()
{
 int a=10,b=20,*p,*q;
 *p=a,*q=b;
 abc(a,b,&p,&q);
 //printf("a=%d   b=%d",p,q);
 printf("\n%d",a/b);
 return 0;
}
