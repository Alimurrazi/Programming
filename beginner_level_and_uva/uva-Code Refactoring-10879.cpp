#include<stdio.h>
#include<math.h>

int ara[100];

int main()
{
    int i,j,k,l,m,n,t,coun;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
     coun=0;
     scanf("%d",&n);
     k=sqrt(n);
     for(j=k;j>=1;j--)
     {
      if(n%j==0)
      {
       if(n/j==j)
       continue;
       else
       {
        ara[coun++]=j;
        if(coun==2)
        break;
       }
      }
     }
     printf("Case #%d: %d = %d * %d = %d * %d\n",i,n,ara[0],n/ara[0],ara[1],n/ara[1]);
    }
}
