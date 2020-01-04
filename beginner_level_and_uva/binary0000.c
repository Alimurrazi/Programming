#include<stdio.h>
int main()
{
 int ara[32];
 int n=12,i=0,j=0,k,sum[32];
 while(n>0)
 {
  ara[i]=n%2;
  n=n/2;
  i++;
  j++;
 }
 for(i=j-1;i>=0;i--)
 {
  for(k=i;k<=i;k++)
  {
   //if(ara[i]==1 && ara[j]==1)
     //  sum[i]=0;
  // else
    sum[i]=ara[i]+ara[k];
  }
 }
 for(i=0;i<j-1;i++)
 {
  printf("%d ",sum[i]);
 }
 return 0;
}
