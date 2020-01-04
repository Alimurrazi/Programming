#include<stdio.h>
int main()
{
  int ara[25];
  int i,j,k,max,min,n,t;
  scanf("%d",&t);
  while(t--)
  {
   scanf("%d",&n);
   min=150,max=0;
   for(i=0;i<n;i++)
   {
   scanf("%d",&ara[i]);
   if(ara[i]<min)
    min=ara[i];
   if(ara[i]>max)
    max=ara[i];
   }
   printf("%d\n",2*(max-min));
  }
  return 0;
}
