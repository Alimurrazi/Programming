#include<stdio.h>
int main()
{
  int ara[15],ara1[15];
  int i,j,k=1,l,n,all;
  while(scanf("%d",&n)==1)
  {
    if(n<0)
      return 0;
    all=0;
    for(i=0;i<12;i++)
     scanf("%d",&ara[i]);
    for(i=0;i<12;i++)
     scanf("%d",&ara1[i]);
    all=n;
    printf("Case %d:\n",k);
    k++;
    for(i=0;i<12;i++)
    {
     if(all>=ara1[i])
     {
       printf("No problem! :D\n");
       all=(all-ara1[i])+ara[i];
     }
     else
     {
        printf("No problem. :(\n");
        all+=ara[i];
    }
  }
  }
  return 0;
}
