#include<stdio.h>
int main()
{
 int ara[50000];
 long i,j,k,l,m,n,p;

 while(scanf("%ld",&n)==1)
 {
   j=0,p=0;
  if(n==0)
  {
   printf("10\n");
   continue;
  }
  while(n!=1)
  {
   for(i=9;i>=2;i--)
   {
    if((n%i)==0)
    {
    n=n/i;
    ara[j]=i;
    j++;
    break;
    }
   }
   if(i<2)
   {
   p=1;
   break;
   }
  }

  if(p==1)
  {
  printf("-1\n");
  p=0;
  continue;
  }
  if(j==0)
  {
   printf("%ld\n",n);
   continue;
  }
  for(i=j-1;i>=0;i--)
  printf("%d",ara[i]);
  printf("\n");
 }
}
