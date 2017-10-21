#include<stdio.h>
int main()
{
  char str[2000005];
  int i,j,k,l,m,n,q,p,min;
  char c1,c2,temp;
  while(1)
  {
    scanf("%d",&l);
    if(l==0)
        return 0;
    scanf("%s",str);
    p=0,k=0,j=0,min=9999999;
    for(i=0;i<l;i++)
    {
      if(str[i]=='Z')
      {
        min=0;
        break;
      }
      if((str[i]=='R'||str[i]=='D')&&p==0)
      {
        p=1;
        if(str[i]=='R')
        {
          c1='R';
          c2='D';
        }
        if(str[i]=='D')
        {
          c1='D';
          c2='R';
        }
      }
      if(p==1)
      {
        k++;
        if(str[i]==c1)
         k=0;
        if(str[i]==c2)
        {
          if(k<=min)
          min=k;
          temp=c1;
          c1=c2;
          c2=temp;
          k=0;
        }
      }
    }
    printf("%d\n",min);
  }
  return 0;
}
