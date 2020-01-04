#include<stdio.h>
int main()
{
  int ara[100];
  int i,j,k,n,key,max,min;
  scanf("%d",&n);
  printf("Lumberjacks:\n");
  while(n--)
  {
   for(i=0;i<10;i++)
   {
    scanf("%d",&ara[i]);
   }
   for(i=0;i<10;i++)
   {
    if(ara[i+1]==ara[0])
        continue;
    else
    {
     if(ara[0]>ara[i+1])
          max=ara[0];
   }}
     for(j=0;j<10;j++)
     {
      if(ara[j]==max)
            continue;
       else if(ara[j]>max)
            break;
     }
   if(j==10)
   {
    printf("Ordered\n");
     continue;
   }
   else
   {
    printf("Unordered\n");
     continue;
   }
    //}
     for(i=0;i<10;i++)
   {
    if(ara[i+1]==ara[0])
        continue;
    else
    {
     if(ara[0]<ara[i+1])
          min=ara[0];
   }}
 // else if(ara[0]<ara[1])
   //{
    // min=ara[0];
    for(j=0;j<10;j++)
    {
     if(ara[j]==min)
            continue;
     else if(ara[j]<min)
            break;
    }
    if(j==10)
    {
    printf("Ordered\n");
      continue;
    }
    else
    {
      printf("Unordered\n");
        continue;
    }
    //}
  }
    return 0;
}
