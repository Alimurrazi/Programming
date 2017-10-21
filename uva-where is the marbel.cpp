#include<stdio.h>
#include<algorithm>
using namespace std;
int ara[10100],ara1[10100],i,j,k=0,q,coun,n,l=0;
int main()
{
  while(scanf("%d%d",&n,&q)!=EOF)
  {
    if(n==0 && q==0)
        return 0;
    l++;
   for(i=0;i<n;i++)
     scanf("%d",&ara[i]);
     sort(ara,ara+i);
   for(i=0;i<q;i++)
   {
    scanf("%d",&ara1[i]);
   }
   printf("CASE# %d:\n",l);
   for(i=0;i<q;i++)
   {
     coun=0,k=0;
     for(j=0;j<n;j++)
     {
       coun++;
       if(ara[j]==ara1[i])
       {
         k=1;
         printf("%d found at %d\n",ara1[i],coun);
         break;
       }
     }
       if(k==0)
        printf("%d not found\n",ara1[i]);
   }
  }
  return 0;
}
