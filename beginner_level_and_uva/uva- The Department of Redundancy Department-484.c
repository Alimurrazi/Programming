#include<stdio.h>
#include<string.h>
int main()
{
  int ara[10000];
  int ara1[10000];
  int i,j,k,l,m,n,max,min;
  memset(ara,0,sizeof(ara));
  //max=ara[0],min=ara[1];
  //printf("%d",ara[66]);
  i=0;
  while(scanf("%d",&n)==1)
  {
   ara[n]=ara[n]+1;
   ara1[i]=n;
   i++;
  }
  for(j=0;j<i;j++)
  {

   if(ara[ara1[j]]==0)
        continue;
    else
    {
     k=ara[ara1[j]];
    printf("%d %d\n",ara1[j],k);
    ara[ara1[j]]=0;
    }
  }
  return 0;
}
