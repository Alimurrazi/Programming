/*
  5
  1
  1
  2
  3
  4
*/
#include<stdio.h>

int n;
int ara[100];
int ans=0,first=0;

int funct(int i,int w)
{
    int ret1,ret2,j;
    if((w%n)==0 && w>0 && ans==0)
    {
        printf("w===%d wi==%d\n",w,i);
        ans=1;
        return 0;
    }
    if(i==n)
        return 0;
    ret1=funct(i+1,w+ara[i]);
    if(w==0 && ans==1)
    {
        printf("w=%d f=%d\n",w,i);
        first=1;
        return 0;
    }
   // if(first==1)
  //  return 0;
    printf("%d w=%d s=%d\n",first,w,i);
   if(ans==1)
        return 0;
    ret2=funct(i+1,w);
  //  if(first==1)
  //      return 0;
    printf("%d w=%d t=%d\n",first,w,i);
  //  if(ans==1)
  //      return 0;
}

int main()
{
    int i,j,k,l,m;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    ans=0;
    funct(0,0);
}
