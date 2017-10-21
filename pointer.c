#include<stdio.h>
int main()
{
 int a,*ap=&a;
 char c,*cp=&c;
 double d,*dp=&d;
 float f,*fp=&f;
 printf("%d %d %d %d",ap,cp,dp,fp);
 ap++,cp++,dp++,fp++;
 printf("\n");
 printf("%d %d %d %d",ap,cp,dp,fp);
 return 0;

}
