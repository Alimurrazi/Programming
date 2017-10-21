#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
    int ara[1100];
    bool check[1100];
    bool aracheck[1100];
    int i,j,k,g,l,m,n,t,p,w,sum,mw,maxi;
    scanf("%d",&t);
    while(t--)
    {
     memset(check,true,sizeof(check));
     memset(aracheck,false,sizeof(aracheck));
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
     scanf("%d%d",&p,&w);
     ara[w]=p;
     aracheck[w]=true;
     }
     scanf("%d",&g);
     sum=0;
     maxi=0;
     for(i=0;i<g;i++)
     {
     scanf("%d",&mw);
     for(j=1;j<=mw;j++)
     {
      if(ara[j]>maxi && check[j]==true && aracheck[j]==true)
      {
       maxi=ara[j];
       p=j;
      }
     }
     printf("maxi=%d\n",maxi);
     sum=sum+maxi;
     check[j]=false;
     maxi=0;
     }
     printf("%d\n",sum);
    }
}
