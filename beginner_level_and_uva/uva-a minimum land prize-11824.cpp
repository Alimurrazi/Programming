#include<stdio.h>
#include<math.h>
#include<algorithm>
int power(int n,int i)
{
 int j,sum=1;
 for(j=1;j<=i;j++)
  sum=sum*n;
  return sum;
}
using namespace std;
int main()
{
  int ara[50];
  int i,j,k,l,m,n,t,temp;
  scanf("%d",&t);
  while(t--)
  {
    i=0,j=0;
    n=1,temp=0;
    while(1)
    {
      scanf("%d",&n);
      if(n==0)
        break;
      ara[i]=n;
      i++;
    }
   for(j=0;j<i;j++)
   {
     for(k=j+1;k<i;k++)
     {
        if(ara[j]<ara[k])
        {
          temp=ara[j];
          ara[j]=ara[k];
          ara[k]=temp;
        }
     }
   }
   m=0,l=0;
      for(j=0;j<i;j++)
      {
       m+=2*(power(ara[j],j+1));
       if(m>5000000)
       {
         l=1;
         printf("Too expensive\n");
         break;
       }
      }
      if(l==0)
        printf("%d\n",m);
  }
}
