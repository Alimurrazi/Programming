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
    ll i,j,k,l,m,n,t;
    vector<int>v;
    v.push_back(1);
    sort(v.begin(),v.end());
    while(sf1l(t)==1)
    {
     for(l=1;l<=t;l++)
     {
     char str[20][20];
     for(i=0;i<10;i++)
     scanf("%s",str[i]);
     for(i=0;i<10;i++)
     {
         for(j=0;j<10;j++)
         {
            if(str[i][j]=='*')
            {

            }
         }
     }
     }
    }
}
