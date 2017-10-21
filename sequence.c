#include<stdio.h>
int main()
{
 int ara[100];
 int i,j,k;
 for(i=0;i<5;i++)
 {
  scanf("%d",&ara[i]);
 }
 for(i=0;i<5;i++)
 {
  if(ara[i+1]==ara[0])
        continue;
  if(ara[i+1]<ara[0]||ara[i+1]>ara[0])
  {
   if(ara[0]>ara[i+1])
   {
   for(j=1;j<5;j++)
   {
    if(ara[j]>ara[0])
    {
     printf("not\n");
      break;
    }
   else{
        printf("yes\n");
         break;}
   }
  }
  break;
 }
}
return 0;
}
