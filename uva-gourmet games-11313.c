#include<stdio.h>
int main()
{
  int n,m,j,k,l,p,count,t;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d%d",&n,&m);
    count=0,l=0;
    while(1)
    {
      n=n-m;
      count++;
      if(n==0)
        break;
      if(n<0)
      {
        l=1;
        printf("cannot do this\n");
        break;
      }
      n=n+1;
    }
    if(l==0)
    printf("%d\n",count);
  }
  return 0;
}
