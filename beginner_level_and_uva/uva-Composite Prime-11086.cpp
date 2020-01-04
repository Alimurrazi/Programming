#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

bool check[2000005];
bool check1[2000005];

void prime()
{
    int i,j,k,l,m,n;
    m=2000000;
    k=sqrt(m);

    for(i=4; i<=m; i=i+2)
    {
        check[i]=false;
    }

    for(i=3; i<=k; i=i+2)
    {
        if(check[i]==true)
        {
        for(j=i*i; j<=m; j=j+i)
        {
            check[j]=false;
        }
        }
    }

    for(i=4; i<=(m/2); i++)
   //  for(i=4; i<=2000000;i++)
    {
        if(check[i]==false && check1[i]==true)
        {
            for(j=2*i; j<=2000000; j=j+i)
            {
                check1[j]=false;
            }
        }
    }
}

int main()
{
    int i,j,k,l,m,n,t,ans;
    memset(check,true,sizeof(check));
    memset(check1,true,sizeof(check1));
    prime();
/*
    for(i=0;i<=200;i++)
    {
        if(check[i]==false && check1[i]==true && i>=4)
        printf("%d\n",i);
    }
    return 0;
*/
    while(scanf("%d",&n)==1)
    {
        ans=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&m);
            if(check[m]==false && check1[m]==true)
                ans++;
        }
        printf("%d\n",ans);
    }
}
