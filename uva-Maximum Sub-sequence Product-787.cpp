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
    ll ara[200];
    ll i,j,k,l,m,t,n;
    while(sf("%lld",&k)==1)
    {
        i=0;
        if(k!=-999999)
        {
            ara[i]=k;
            i++;
        }
        else
            continue;
        while(1)
        {
            if(k==-999999)
                break;
            sf("%lld",&k);
            if(k==-999999)
                break;
            ara[i]=k;
            i++;
        }

        n=i;
        //  pf("%lld\n",n);
        /*
         for(i=0;i<n;i++)
         {
             pf("%lld\n",ara[i]);
         }
         return 0;
         */
 //       n=i;
        m=-2147483645123456;
        k=1;
        for(i=0; i<n; i++)
        {
            k=ara[i];
            if(k>m)
                m=k;
            for(j=i+1; j<n; j++)
            {
                k=k*ara[j];
                if(k>m)
                    m=k;
            }
        }
        pf("%lld\n",m);
    }
}
