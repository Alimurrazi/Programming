#include<stdio.h>
int main()
{
 int ara[2000];
 int i,j,k,count,countn,n,a=0,b;
 while(1)
 {
  scanf("%d",&n);
  if(n==0)
     return 0;
  a++;
  count=0,countn=0;
  for(i=0;i<n;i++)
  {
   scanf("%d",&ara[i]);
   if(ara[i]==0)
        count++;
   else
    countn++;
  }
  printf("Case %d: %d\n",a,countn-count);
 }
 return 0;
}
