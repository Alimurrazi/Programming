#include<stdio.h>
int main()
{
 int i,a=0,b=1,c;
 for(i=0;i<100;i++)
 {
 //printf("%d",a);
 c=a+b;
 a=b;
 b=c;
 printf("%d",a);
 }
    return 0;
}
