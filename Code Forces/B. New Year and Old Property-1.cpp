#include<stdio.h>
#include<stack>
using namespace std;
stack<long long>q;

long long bicheck(long long n)
{
    long long i,j,k=0,l,m;
    while(n!=0)
    {
        k++;
        n=n/2;
    }
    return k;
}

long long bitcheck(long long n,long long id)
{
    long long i,j,k,l,m,b,a;
    while(n!=0)
    {
        q.push(n%2);
        n=n/2;
    }
    k=0,j=0,b=0,a=0;
    l=q.size();
    while(!q.empty())
    {
        m=q.top();
        q.pop();
        if(m==0)
            j=1;
        if(m==1 && j==0)
            b++;
        if(m==1 && j==1)
            a++;
    }
    if(id==1)
    {
        if((b+a+1)==l)
            return b;
        else
            return b-1;
    }
    else
            return (l-b);
}

int main()
{
    long long i,j,k,l,m,n,t,f;
    while(1)
    {
        scanf("%lld%lld",&f,&l);
        m=bicheck(f);
        n=bicheck(l);
        k=0;
        for(i=m+1; i<n; i++)
        {
            k=k+(i-1);
        }
        k=k+bitcheck(f,0);
        k=k+bitcheck(l,1);
        printf("%lld\n",k);
    }
}
