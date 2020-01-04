#include<stdio.h>
int main()
{
 int ara[1000];
 int i,n,j,k,l,t,m,count,counte;
 scanf("%d",&t);
 for(k=1;k<=t;k++){
  scanf("%d",&m);
 for(i=0;i<m;i++)
 {
  scanf("%d",&ara[i]);
 }
 for(i=0;i<m;i++)
 {
  n=ara[i];
 count=0,counte=0;
  for(j=0;j<m;j++)
  {
  if(n==ara[j])
    continue;
   if(n>ara[j])
        count++;
   else
       counte++;
  }
 if (count==counte)
   printf("Case %d: %d\n",k,ara[i]);
 }}
  return 0;
}
