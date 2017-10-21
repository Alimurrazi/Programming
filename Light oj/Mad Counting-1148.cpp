#include<stdio.h>
#include<map>
#include<string.h>
#include<queue>
using namespace std;

map < long long , long long > coun;
bool check[1000005];
queue<long long > q;

int main()
{
    long long i,j,k,l,m,n,t,ans;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        ans=0;
        memset(check,false,sizeof(check));
        scanf("%lld",&n);
        for(j=0; j<n; j++)
        {
            scanf("%lld",&m);
            coun[m]++;
            if(check[m]==false)
            {
                check[m]=true;
                q.push(m);
            }
        }
        while(!q.empty())
        {
            n=q.front();
            k=coun[m]/(n+1);
            if((coun[m]%(n+1))!=0)
                k=k+1;
            ans=ans+(k*(n+1));
            q.pop();
        }
        printf("Case %lld: %lld\n",i,ans);
        coun.clear();
    }
}
