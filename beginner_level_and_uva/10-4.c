#include<stdio.h>
int recure(int a,int b){
 if(b<=0)
    return 1;
 int n=a+b;
 printf("a=%d b=%d res=%d\n",a,b,n);
 n=recure(b+1,a%b)+recure(b-1,(a%b)-1);
 printf("a=%d b=%d res=%d\n",a,b,n);
 return n;
}
int main()
{
  int a=2,b=4,c;
  c=recure(a,b);
  printf("%d",c);
  return 0;
}
