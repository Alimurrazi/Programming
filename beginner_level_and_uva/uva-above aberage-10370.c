#include<stdio.h>
#include<math.h>
int main()
{
 float ara[5000],aver,above,sum,count,t;
 int i,j,k,c;
 scanf("%d",&c);
 while(c--)
 {
  scanf("%f",&t);
  sum=0;
  for(i=0;i<t;i++)
  {
   scanf("%f",&ara[i]);
   sum=sum+ara[i];
  }
  aver=sum/t;
  count=0;
  for(i=0;i<t;i++)
  {
   if(ara[i]>aver)
        count++;
  }
  above=((count*100)/t);
  printf("%.3f%%\n",above);
 }
 return 0;
}
