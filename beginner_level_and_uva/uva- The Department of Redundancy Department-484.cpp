#include<stdio.h>
#include<string.h>
int main()
{
  bool cou[100000];
  int ara[100000];
  int i,j,k,l,m,n;
  i=0;
  while(scanf("%d",&n)==1)
  {
   ara[i]=n;
   i++;
  }
  memset(cou,0,sizeof(cou));
  for(j=0;j<i;j++)
  {
    l=0;
    for(k=j;k<i;k++)
    {
      if(ara[j]==ara[k] && cou[k]==0)
      {
        cou[k]=1;
        l++;
      }
    }
    if(l!=0)
     printf("%d %d\n",ara[j],l);
  }
}
