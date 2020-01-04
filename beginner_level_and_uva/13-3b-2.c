#include<stdio.h>
int main()
{
 int a=1,b[3]={2,5,7},*p1,*p2;
 p1=&a;
 p2=&b[1];
 printf("%d",*p1+*p2);
 return 0;
}
