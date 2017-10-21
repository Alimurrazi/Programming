#include<stdio.h>
#include<algorithm>
using namespace  std;
int main()
{
  int ara[1000003];
  int ara1[1000003];
  int i,j,k,l,m,n,cou;
  while(1)
  {
    scanf("%d%d",&m,&n);
    if(m==0 && n==0)
      return 0;
    for(i=0;i<m;i++)
    scanf("%d",&ara[i]);
    sort(ara,ara+i);
    for(j=0;j<n;j++)
    scanf("%d",&ara1[j]);
    cou=0;
    for(j=0;j<n;j++)
    {
      k=ara1[j];
      int low=0,mid,high=m;
      while(low<=high)
      {
        mid=(low+high)/2;
        if(ara[mid]==k)
        {
            cou++;
            break;
        }
        if(ara[mid]>k)
          high=mid-1;
        if(ara[mid]<k)
          low=mid+1;
      }
    }
    printf("%d\n",cou);
  }
}
