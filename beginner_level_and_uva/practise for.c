#include<stdio.h>
int main()
{
int i,n,j,sum;
while(1)
{
 sum=0;
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  sum=sum+i;
 }
 printf("%d\n",sum);
}
}
