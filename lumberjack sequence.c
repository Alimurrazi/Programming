#include<stdio.h>
int main()
{
 int ara[20];
 int i,j,n,up,down,t,c;
 printf("Lumberjacks:\n");
 while(scanf("%d",&t)==1)
 {
 while(t--)
 {
  for(i=0;i<10;i++)
  {
   scanf("%d",&ara[i]);
  }
  up=ara[0],down=ara[1];
  if(up>down)
  {
   c=0;
   for(i=0;i<9;i++)
   {
    if(ara[i]>ara[i+1])
        c++;
    else
        break;
   }
  }
  if(up<down)
  {
    c=0;
   for(i=1;i<10;i++)
   {
    if(ara[i]<ara[i+1])
        c++;
    else
        break;
   }
  }
  if(c==9)
    printf("Ordered\n");
  else
    printf("Unordered\n");
 }}
 return 0;
}
