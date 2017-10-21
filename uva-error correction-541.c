#include<stdio.h>
int main()
{
 int ara[200][200];
 int i,j,k,l,m,n,a,b,c,count,countr;
 while(scanf("%d",&n)==1)
 {
   if(n==0)
   return 0;
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
       scanf("%d",&ara[i][j]);
     }
   }
   count=0,l=1;
   for(i=0;i<n;i++)
   {
      c=0;
     for(j=0;j<n;j++)
      c=c+ara[i][j];
     if(c%2!=0)
     {
       count++;
     }
     if(count==1)
     {
      if(l==0)
       continue;
      a=i+1;
      l=0;
     }
   }
   c=0,countr=0 ,l=1;;
   for(i=0;i<n;i++)
   {
     c=0;
     for(j=0;j<n;j++)
      c=c+ara[j][i];
     if(c%2!=0)
     {
       countr++;
     }
     if(countr==1)
     {
       if(l==0)
        continue;
       b=i+1;
       l=0;
     }
   }
   if(count==0 && countr==0)
        printf("OK\n");
  else if(count==1 && countr==1)
        printf("Change bit (%d,%d)\n",a,b);
   else
        printf("Corrupt\n");
 }
}
