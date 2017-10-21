#include<stdio.h>
#include<string.h>
#include<vector>
#include<map>
using namespace std;

bool check[1000005];
vector<long long>ara;

void prime()
{
    long long i,j,k,l=1,m,n;
    memset(check,true,sizeof(check));
    ara.push_back(2);
    for(j=3; (j*j)<=1000000; j=j+2)
    {
        if(check[j]==true)
        {
            for(i=j*2; i<=1000000; i=j+i)
            {
                check[i]=false;
            }
        }
    }
    for(j=3; j<=1000000; j=j+2)
    {
        if(check[j]==true)
            ara.push_back(j);
    }
    ara.push_back(1000003);
}

int main()
{
    long long i,j,k,l,m,n,t,b,c,ans,a;
    prime();
//   return 0;
    scanf("%lld",&t);
    for(l=1; l<=t; l++)
    {
        scanf("%lld",&n);
        ans=1;
        for(i=0; i<ara.size()&& (ara[i]*ara[i])<=n; i++)
        {
            k=0;
            if(n<ara[i])
                break;
            while(n%ara[i]==0)
            {
                n=n/ara[i];
                k++;
            }
            ans=ans*(k+1);
        }
        if(n!=1)
        {
            ans=ans*2;
        }
        ans=ans-1;
        printf("Case %lld: %lld\n",l,ans);
    }
}
