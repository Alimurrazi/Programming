#include<stdio.h>
int main()
{
 int ara[30];
 int i,j=0,k,l,mp,n,count;
 while(scanf("%d",&n)!=EOF)
 {
  mp=1;
  count=0;
  for(i=0;i<n;i++)
  {
   scanf("%d",&ara[i]);
   if(ara[i]>0)
   {
        mp=mp*ara[i];
        count++;
   }
  }
   if(count==0)
    mp=0;
    j=j+1;
   printf("Case #%d: The maximum product is %d.\n\n",j,mp);
 }
 return 0;
}
