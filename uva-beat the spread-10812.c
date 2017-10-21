#include<stdio.h>
int main()
{
 long long int s,d,x,y,t;
 scanf("%lld",&t);
 while(t--)
    {
  scanf("%lld%lld",&s,&d);
  if((s<d)||((s+d)%2!=0))
  {
  printf("impossible\n");
 continue;
  }
  x=((s+d)/2);
  y=(s-x);
  if(x>y)
  printf("%lld %lld\n",x,y);
  else
    printf("%lld %lld\n",y,x);
 }
 return 0;
}
