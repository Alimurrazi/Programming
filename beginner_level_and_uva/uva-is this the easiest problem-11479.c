#include<stdio.h>
int main()
{
 int i,j,k,t;
 long long a,b,c;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
 {
  scanf("%lld%lld%lld",&a,&b,&c);
  if(((a+b)<=c)||((b+c)<=a)||((c+a)<=b))
  {
   printf("Case %d: Invalid\n",i);
   continue;
  }
  else
  {
   if((a==b)&&(b==c)&&(c==a))
   {
    printf("Case %d: Equilateral\n",i);
    continue;
   }
   if((a==b)||(b==c)||(c==a))
   {
    printf("Case %d: Isosceles\n",i);
    continue;
   }
   if((a!=b)&&(b!=c)&&(c!=a))
   {
    printf("Case %d: Scalene\n",i);
    continue;
   }
  }
 }
 return 0;
}
