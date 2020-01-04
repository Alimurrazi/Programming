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
    char str[100005];
    ll i,j,k,l,m,n,t,p,q,r;
    scanf("%lld",&t);
    {
        bool check[30];

        for(j=1; j<=t; j++)
        {
            long long ara[30];
            memset(check,false,sizeof(check));
            sf("%s",&str);
            l=strlen(str);
            long long c;
            for(i=0; i<l; i++)
            {
                c=str[i]-'a';
                if(check[c]==false)
                {
                    //       printf("c============%lld\n",c);
                    ara[c]=i;
                    check[c]=true;
                }
            }
            /*
                        for(i=0;i<26;i++)
                        {
                            printf("%lld %lld\n",i,ara[i]);
                        }
                        return 0;
                        */
            char a,b;
            long long fp;
            k=0;
            //  int minc;
            /*
             for(i=0;i<25;i++)
             {
                 if(check[i]==true)
                 printf("%lld %lld\n",i,ara[i]);
             }
             return 0;
             */
            for(i=0; i<26; i++)
            {
                if(check[i]==true)
                {
                    //    minc=i;
                    for(p=0; p<ara[i]; p++)
                    {
                        if((str[p]-'a')>i)
                        {
                            a='a'+i;
                            b=str[p];
                            k=2;
                            break;
                        }
                    }
                    if(p!=ara[i])
                        break;
                }
            }
            /*
            for(i=0; i<26; i++)
            {
                if(k==0)
                {
                    if(check[i]==true)
                    {
                        a='a'+i;
                        k=1;
                        break;
                    }
                }
            }
            for(i=0; i<l; i++)
            {
                if(str[i]!=a)
                {
                    b=str[i];
                    k=2;
                    break;
                }
            }
            */
            if(k<2)
                pf("%s\n",str);
            else
            {
                for(i=0; i<l; i++)
                {
                    if(str[i]==a)
                    {
                        str[i]=b;
                        continue;
                    }
                    if(str[i]==b)
                        str[i]=a;
                }
                pf("%s\n",str);
            }
        }
    }
}
