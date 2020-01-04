#include<stdio.h>
int main()
{
 int b,p,m,result;
 while(scanf("%d%d%d",&b,&p,&m)==3)
 {
  result=1;
  while(p>0)
  {
   if(p%2==1)
   {
    result=(result*b)%m;
   }
   p=p>>1;
   b=((b%m)*(b%m))%m;
  }
  printf("%d\n",result);
 }
 return 0;
}
