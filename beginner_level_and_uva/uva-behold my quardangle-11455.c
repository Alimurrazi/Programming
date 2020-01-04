#include<stdio.h>
int main()
{
  long long a,b,c,d,k,i;
  int n;
  while(scanf("%d",&n)==1)
  {
    for(i=0;i<n;i++)
    {
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    if((a==b)&&(b==c)&&(c==d))
    {
      printf("square\n");
      continue;
    }
  else if(((a==b)&&(c==d))||((a==c)&&(b==d))||((a==d)&&(c==b)))
    {
      printf("rectangle\n");
      continue;
    }
  else if(((a+b+c)<=d)||((b+c+d)<=a)||((d+c+a)<=b)||((a+b+d)<=c))
    {
      printf("banana\n");
      continue;
    }
  else
  {
    printf("quadrangle\n");
    continue;
  }
  }
  }
  return 0;
}
