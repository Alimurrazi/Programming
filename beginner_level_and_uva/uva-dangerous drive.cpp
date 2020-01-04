#include<stdio.h>
int ara[10010],ara1[10010],i,j,k,l,n,r;
int main()
{
 while(scanf("%d%d",&n,&r)!=EOF)
 {
   for(i=1;i<=n;i++)
   {
     ara1[i]=0;
   }
   for(i=1;i<=r;i++)
   {
    scanf("%d",&ara[i]);
    ara1[ara[i]]=ara[i];
   }
    if(n==r)
   {
     printf("*\n");
     continue;
   }
   for(i=1;i<=n;i++)
   {
     if(ara1[i]!=i)
     {
       printf("%d ",i);
     }
   }
  printf("\n");
 }
 return 0;
}
