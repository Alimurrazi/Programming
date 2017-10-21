#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
long int ara[20005],ara1[20005];
long int i,j,k,l,m,n,sum,coun;
 while(scanf("%ld%ld",&m,&n)==2)
 {
   if(m==0 && n==0)
     return 0;
   sum=0,coun=0;
  for(i=0;i<m;i++)
  scanf("%ld",&ara[i]);
  sort(ara,ara+i);
  for(i=0;i<n;i++)
  scanf("%ld",&ara1[i]);
  sort(ara1,ara1+i);
  if(m>n)
  {
    printf("Loowater is doomed!\n");
    continue;
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(ara[i]<=ara1[j])
      {
       sum=sum+ara1[j];
       coun++;
       ara1[j]=-1;
       break;
      }
    }
  }
  if(coun==m)
    printf("%ld\n",sum);
  else
    printf("Loowater is doomed!\n");
 }
 return 0;
}
