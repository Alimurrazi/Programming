#include<stdio.h>
int main()
{
 int ara[100],i,n,j=0,m,sum,aver,count;
 while(1)
 {
  scanf("%d",&n);
  if(n==0)
    return 0;
  j++;
  sum=0,count=0;
  for(i=0;i<n;i++)
  {
   scanf("%d",&ara[i]);
   sum=sum+ara[i];
  }
  aver=sum/n;
  for(i=0;i<n;i++)
  {
   if(ara[i]>aver)
        count=count+(ara[i]-aver);
  }
  printf("Set #%d\n",j);
  printf("The minimum number of moves is %d.",count);
  printf("\n");
  printf("\n");
 }
 return 0;
}
