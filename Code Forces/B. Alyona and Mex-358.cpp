#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;

int ara[100005];

struct data
{
    int b;
    bool operator < (const data & p)const
    {
     return p.b<b;
    }
};

priority_queue<data>q;

int main()
{
    int i,j,k,l,m,n,o,p,t;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
        }
        sort(ara,ara+i);
        m=1;
        j=1;
        for(i=0;i<n;i++)
        {
         if(ara[i]>m)
         {
          m=m+1;
         }
         else if(ara[i]==m)
         {
          m=ara[i]+1;
         }
        // j++;
        }
        printf("%d\n",m);
    }
}
