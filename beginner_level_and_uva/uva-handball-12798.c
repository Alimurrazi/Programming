#include<stdio.h>
int main()
{
 int ara[200];
 int i,j,k,l,m,n,count,key;
 while(scanf("%d%d",&m,&n)==2)
 {
  count=0;
  for(i=0;i<m;i++)
  {
   key=0;
   for(j=0;j<n;j++)
   {
     scanf("%d",&ara[j]);
     if(ara[j]==0)
        key=1;
   }
   if(key==0)
    count++;
  }
  printf("%d\n",count);
 }
 return 0;
}
