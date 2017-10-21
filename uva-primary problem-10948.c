#include<stdio.h>
#include<math.h>
int main()
{
 int ara[20000005];
 int i,j,k,l,m,n,a,b;
 ara[2]=1,ara[3]=1;
 for(i=4;i<=1000000;i++)
 {
   k=sqrt(i);
   ara[i]=1;
   for(j=2;j<=k;j++)
   {
    if(i%j==0)
    {
     ara[i]=0;
    break;
    }
   }
 }
 while(1)
 {
  scanf("%d",&n);
  if(n==0)
    break;
  k=n/2;
  j=n-2;
  if(ara[j]==1)
  {
   printf("%d:\n",n);
   printf("2+%d\n",j);
   continue;
  }
  for(i=3;i<=k; )
  {
    j=n-i;
    if(ara[i]==1 && ara[j]==1)
    {
      printf("%d:\n",n);
      printf("%d+%d\n",i,j);
      break;
    }
    i=i+2;
  }
  if(i>k)
  {
    printf("%d:\n",n);
    printf("NO WAY!\n");
  }
 }
 return 0;
}
