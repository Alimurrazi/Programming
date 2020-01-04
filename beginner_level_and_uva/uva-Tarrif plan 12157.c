#include<stdio.h>
#include<math.h>
int main()
{
 float ara[500];
 float b,m,sum,sum1,k;
 int i,j,a,n;
 scanf("%d",&a);
 for(j=1;j<=a;j++)
 {
  sum=0,sum1=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%f",&ara[i]);
  }
  for(i=0;i<n;i++)
  {
   m=(ara[i]/29);
   m=floor(m);
   if((ara[i]-m*29)>0)
    {
     sum=sum+((m+1)*10);
      continue;
   }
   if(ara[i]<29)
    {
       sum=sum+10;
      continue;
   }
    if((ara[i]-m*29)==0)
   sum=sum+(m*10);
  }
 for(i=0;i<n;i++)
 {
  k=(ara[i]/59);
  k=floor(k);
  if(ara[i]<59){
    sum1=sum1+15;
    continue;
  }
   if((ara[i]-(k*59))>0){
    sum1=sum1+((k+1)*15);
    continue;
   }
  if((ara[i]-(k*59))==0)
  {
    sum1=sum1+(k*15);
    continue;
  }
 }
 if(sum<sum1){
    printf("Case %d: Mile %.0f\n",j,sum);
     continue;
 }
 if(sum==sum1){
    printf("Case %d: Mile Juice %.0f\n",j,sum1);
    continue;
}
 if(sum1<sum){
    printf("Case %d: Juice %.0f\n",j,sum1);
    continue;
    }
 }
 return 0;
}
