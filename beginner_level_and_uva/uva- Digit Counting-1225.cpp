#include<stdio.h>
#include<string.h>

int main()
{
    int ara[20];
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
     memset(ara,0,sizeof(ara));
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
      k=i;
      while(k!=0)
      {
      l=k%10;
      ara[l]++;
      k=k/10;
      }
     }
     for(i=0;i<=9;i++)
     {
      if(i!=0)
      printf(" ");
      printf("%d",ara[i]);
     }
     printf("\n");
    }
}
