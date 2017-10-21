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

bool check[60000005];

int main()
{
    FILE *fin  = fopen ("abc.in", "r");
    FILE *fout = fopen ("abc.out", "w");
    int ara[3510];
    ll i,j,k,l,m,n,t;
    //  while(sf1l(n)==1)
    while(fscanf(fin,"%lld",&n)==1)
    {
        memset(check,false,sizeof(check));
        for(i=0; i<n; i++)
        {
            //            sf("%lld",&m);
            fscanf(fin,"%lld",&m);
            m=m+15000000;
            ara[i]=m;
            check[m]=true;
        }
        ll a,b,cn=0;
        for(i=0; i<n; i++)
        {
            a=ara[i];
            for(j=i+1; j<n; j++)
            {
                b=ara[j];
                //      printf("%lld %lld %lld\n",a,b,a+b);
                if(a!=15000000&&b!=15000000)
                    if(a+b>=15000000)
                        if(check[a+b-15000000]==true)
                            cn++;
            }
        }
        cn=cn*2;
        //       pf("%lld\n",cn);
        fprintf(fout,"%lld\n",cn);
        //    n=1000;
        //  prime(n);

    }
}

