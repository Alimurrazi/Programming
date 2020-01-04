#include<stdio.h>
#include<math.h>
int main()
{
long int ara[11000];
long int i,j,k,l,sum,n,m,dif,p,temp;
 while(scanf("%ld",&n)!=EOF)
 {
  for(i=0;i<n;i++)
  {
   scanf("%ld",&ara[i]);
  }
  scanf("%ld",&m);
  k=1000009,l=0,p=0,dif=0;
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
    if((ara[i]+ara[j])==m)
     {
       dif=fabs(ara[j]-ara[i]);
       if(dif<k)
       {
        k=dif;
        l=i,p=j;
       }
     }
   }
  }
  if(ara[l]<=ara[p])
  printf("Peter should buy books whose prices are %ld and %ld.\n\n",ara[l],ara[p]);
  else
    printf("Peter should buy books whose prices are %ld and %ld.\n\n",ara[p],ara[l]);
 }
 return 0;
}
