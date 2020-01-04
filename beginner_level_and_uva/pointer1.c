#include<stdio.h>
int main()
{
 int a;
int *p=&a;
 a=5;
 printf("%d %d %d",a,p,*p);
 (*p)++;
 printf("\n");
 printf("%d %d %d",a,p,*p);
 return 0;
}
