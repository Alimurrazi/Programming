#include<stdio.h>
#include<math.h>
int main()
{
  double money,tax,sumt,j,k,l,m,n;
  int t,i;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
 {
   scanf("%lf",&money);
   printf("Case %d: ",i);
   tax=0,l=0;
   k=money;
   money=money-180000;
   if(money<=0)
   {
    printf("%.0lf\n",tax);
    continue;
   }
   k=money;
   money=money-300000;
   if(money<=0)
   {
    tax+=(k*10.0)/100.0;
    if(tax<2000)
      tax=2000;
     tax=ceil(tax);
     printf("%.0lf\n",tax);
    continue;
   }
   else
    tax+=30000;

    k=money;
   money=money-400000;
   if(money<=0)
   {
     tax+=(k*15.0)/100.0;
     tax=ceil(tax);
     printf("%.0lf\n",tax);
     continue;
   }
   else
    tax+=60000;
   k=money;
   money=money-300000;
   if(money<=0)
   {
    tax+=(k*20.0)/100.0;
    tax=ceil(tax);
    printf("%.0lf\n",tax);
    continue;
   }
   else
    tax+=60000;
   k=money;
   tax+=(money*25.0)/100.0;
   tax=ceil(tax);
   printf("%.0lf\n",tax);
 }
 return 0;
}
