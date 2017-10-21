#include<stdio.h>
#include<string.h>
int main()
{
  int ara[10];
  long long i,j=0,k,l,m,n,t,p,c;
  scanf("%lld",&t);
  while(t--)
  {
    if(j==1)
    printf("\n");
    scanf("%lld",&n);
    k=n,i=1;
    while(k<=9876543210)
    {
     p=i,c=0;
     memset(ara,0,sizeof(ara));
     while(p!=0)
     {
      l=p%10;
      if(ara[l]>0)
       break;
      else
        ara[l]=1;
      p=p/10;
     }
     if(p==0)
      c=1;
     k=n*i;
     if(k>9876543210)
       break;
     m=k;
     memset(ara,0,sizeof(ara));
     while(k!=0 && c==1)
     {
      l=k%10;
      if(ara[l]>0)
       break;
      else
        ara[l]=1;
      k=k/10;
     }
     if(k==0 && c==1)
      printf("%lld / %lld = %lld\n",m,i,n);
     i++;
    }
    j=1;
  }
}
