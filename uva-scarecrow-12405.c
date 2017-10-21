#include<stdio.h>
int main()
{
  char str[210];
  int i,j,k,l,n,t;
  scanf("%d",&t);
  for(j=1;j<=t;j++)
  {
    scanf("%d%*c",&n);
    gets(str);
    k=0;
    for(i=0;i<n;i++)
    {
      if(str[i]=='#')
      {
        continue;
      }
       else
       {
         k++;
         i=i+2;
       }
    }
   printf("Case %d: %d\n",j,k);
  }
  return 0;
}
