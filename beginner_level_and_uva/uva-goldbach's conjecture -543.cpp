#include<stdio.h>
#include<string.h>
#define N 1000000
int main()
{
  bool ara[N+10];
  int i,j,k,l,m,n;
  memset(ara,true,sizeof(ara));
  ara[0]=ara[1]=false;
  for(i=2;i*i<=N;i++)
  {
    if(ara[i]==true)
     for(j=2*i;j<=N;j=j+i)
    {
     ara[j]=false;
    }
  }
  ara[2]=false;
  while(1)
  {
    scanf("%d",&n);
    if(n==0)
     return 0;
     k=0;
    for(i=3;i<=n/2;i++)
    {
      if(ara[i]==true)
      {
        if(ara[n-i]==true)
        {
          printf("%d = %d + %d\n",n,i,n-i);
          k=1;
          break;
        }
      }
    }
    if(k==0)
        printf("Goldbach's conjecture is wrong.\n");
  }
}
