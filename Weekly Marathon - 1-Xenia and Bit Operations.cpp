#include<stdio.h>
#include<queue>
using namespace std;

long long ara[150000];
queue<long long>que;
long long len;

long long power(long long p)
{
    long long i,j,l,m,n,k=1;
    for(i=1; i<=p; i++)
    {
        k=k*2;
    }
    return k;
}

long long convert(long long key)
{
    long long i,j,k,l,m,n,t,a,b;
    if(que.size()==1)
    {
        k=que.front();
        que.pop();
        printf("%lld\n",k);
        return k;
    }
    if(key==1)
    {
        for(i=1; ; i=i+2)
        {
            if(i>len)
                break;
            a=ara[i];
            b=ara[i+1];
            k=a|b;
            que.push(k);
        }
    }
    else
    {
        l=que.size();
        l=l/2;
        for(i=0; i<l; i++)
        {
            a=que.front();
            que.pop();
            b=que.front();
            que.pop();
            if(key%2==1)
            {
                k=a|b;
                que.push(k);
            }
            else
            {
                k=a^b;
                que.push(k);
            }
        }
    }
    convert(key+1);
}

int main()
{
    long long i,j,k,l,m,n,t,q,a,b;
    while(scanf("%lld%lld",&n,&q)==2)
    {
        l=power(n);
        for(i=1; i<=l; i++)
            scanf("%lld",&ara[i]);
        len=l;
        for(i=1; i<=q; i++)
        {
            scanf("%lld%lld",&a,&b);
            ara[a]=b;
            convert(1);
        }
    }
}
