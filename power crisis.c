#include<stdio.h>
int main()
{
 int ara[105];
 int i,j,k,l,m=5,n=14;

 for(m=1;m<=n;m++)
 {
   k=0;
int   p=1;
 for(i=0;i<=n;i++)
 ara[i]=0;
   ara[1]=1;
   for(j=1; ;j++)
   {
     if(j>n)
    j=1;

    if(ara[j]==1)
       continue;

    k++;
    if(k==m)
    {
      ara[j]=1;
      k=0;
      printf("%d ",j);
      p++;
      if(p==n && j==13)
       break;
      if(p==n)
      {
        printf("\n",m);
        break;
      }

      continue;
    }
   }
 }
}

