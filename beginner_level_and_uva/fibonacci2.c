#include<stdio.h>
#include<limits.h>
int main()
{
 int ara[40];
 int a=0,b=1,c,i,n=33;
 for(i=0;i<30;i++)
 {
  ara[i]=a;
  c=a+b;
  a=b;
  b=c;
 }
 for(i=0;i<30;i++)
 {
  if(ara[i]==n)
        break;
 }
 if(i==30)
    printf("no fibonacci");
 else
    printf("yes fibonacci");
 return 0;
}
