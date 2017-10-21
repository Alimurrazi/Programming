#include<stdio.h>
#include<stack>
using namespace std;

int main()
{
    long long fact[100];
    stack<long long>q;
    fact[0]=1;
    long long i,j,k,l,m,n,t,p;
    for(i=1; i<=20; i++)
    {
        fact[i]=fact[i-1]*i;
    }
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        for(j=20; j>=0; j--)
        {
            if(n<0)
            {
                j=-1;
                break;
            }
            if(fact[j]==n)
            {
                q.push(j);
                break;
            }
            else if(fact[j]<n)
            {
                q.push(j);
                n=n-fact[j];
            }
        }
        p=0;
        printf("Case %lld: ",i);
        if(j<0)
        {
            printf("impossible");
            while(!q.empty())
            {
                q.pop();
            }
        }
        else
        {
            while(!q.empty())
            {
                k=q.top();
                q.pop();
                if(p!=0)
                    printf("+");
                printf("%lld!",k);
                p=1;
            }
        }
        printf("\n");
    }
}
