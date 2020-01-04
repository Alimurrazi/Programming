#include<stdio.h>
int main()
{
  int ara[10100];
  int i,j,k,l,p=0;
  for(i=1; ;i++)
  {
   scanf("%d",&ara[i]);
   if(i%2!=0)
   {
   k=(1+i)/2;
   printf("%d\n",ara[k]);
   }
   if(i%2==0)
   {
    k=(1+i)/2;
    printf("%d\n",(ara[k]+ara[k+1])/2);
   }
  }

}
