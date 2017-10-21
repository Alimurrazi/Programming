#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 long i,j,k,l,m,n,ans;
 while(scanf("%ld%s",&n,str)==2)
 {
  k=strlen(str);
  ans=1;

  l=n%k;

  if(l==0)
  {
    for(i=0; ;i++)
    {
     m=(n-k*i);
     ans=ans*m;
     if(m==k)
     break;
    }
  }

  else
  {
    for(i=0; ;i++)
    {
     m=(n-k*i);
     ans=ans*m;
     if(m==l)
      break;
    }
  }

  printf("%ld\n",ans);
 }
}
