#include<stdio.h>
int main()
{
  int ara[5],i,j,min;
  while(1)
  {
   min=ara[0];
   for(i=0;i<3;i++)
   {
     scanf("%d",&ara[i]);
     if(ara[i]<min)
        min=ara[i];
   }
   printf("%d\n",min);
  }
}
