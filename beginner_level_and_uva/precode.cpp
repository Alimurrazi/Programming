//#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
#include<fstream>
#include<map>
#include<string>
#include<cstring>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<bitset>
#include<list>
#include<time.h>
#include<numeric>
#include<complex>
#include<utility>
using namespace std;

#define pb push_back
#define mem1(a) memset(a,1,sizeof(a))
#define mem(a)  memset(a,true,sizeof(true))
#define pi 2*acos(0.0)
#define pf printf
#define sf scanf
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d%d",&a,&b)
#define sf1l(a) scanf("%lld",&a)
#define sf2l(a,b) scanf("%lld%lld",&a,&b)
#define sf1d(a) scanf("%lf",&a)
#define sf2d(a,b) scanf("%lf%lf",&a,&b)

typedef long long ll;
typedef unsigned long long ull;


int main()
{
    ll i,j,k,l,m,n,t,o,p,q,r,s;
    scanf("%lld",&t);
    {
    for(l=1;l<=t;l++)
    {
        scanf("%lld%lld%lld",&n,&k,&m);
        p=k%m;
        q=(k*k)%m;
        if(n>2)
        {
            for(i=2;i<=n;i++)
            {
                s=(p*q)%m;
                p=q;
                q=s;
            }
        }
        else
        {
            if(n==1)
                s=(k*k)%m;
            if(n==2)
                s=(k*k*k)%m;
        }
        printf("Case %lld: %lld\n",l,s);
    }
    }
}
