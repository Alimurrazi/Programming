#include<stdio.h>
#include<math.h>
int GCD(int a,int b)
{
    if(a==0)
        return b;
    else
        return GCD(b%a,a);
 }
int main()
{
  int ara[60],j,i,k,l;
  double n,pi,count,no;
  while(1)
  {
   scanf("%lf",&n);
   if(n==0)
    return 0;
    l=0;
  for(i=0;i<n;i++)
  {
   scanf("%d",&ara[i]);
   l=l+i;
  }
  count=0,no=0;
  for(i=0;i<n-1;i++)
  {
   for(j=i+1;j<n;j++)
   {
   k=GCD(ara[i],ara[j]);
   printf("%d %d %d\n",ara[i],ara[j],k);
   if(k==1)
   {
       count++;
    printf("%d %d\n",ara[i],ara[j]);
   }
   }
  }
  if(count==0)
  {
   printf("No estimate for this data set.\n");
   continue;
  }
  pi=(6*l)/count;
  pi=sqrt(pi);
  printf("%lf\n",pi);
  }
  return 0;
}
