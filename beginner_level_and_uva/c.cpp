/*
  1
  2 3
  1 10
  2 1
  1 -20
*/
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
    map<int,int>qm;
    char str[100005];
    ll i,j,k,l,m,n,t,p,r,q,wc=0;
    scanf("%lld",&t);
    {
       // qm.clear();

        for(l=1; l<=t; l++)
        {
            ll hp=-214748364,wt=0,fe,k=0,te,pt;
            qm.clear();
            wc=0;
            int ara[100005];
            memset(ara,0,sizeof(ara));
            scanf("%lld%lld",&n,&q);
            for(i=1; i<=q; i++)
            {
                scanf("%lld%lld",&te,&pt);
                ara[te]=ara[te]+pt;
                qm[ara[te]]=te;
                qm[ara[te]-pt]=0;
                if(pt<0 && wt==te)
                {
                    hp=ara[te];
                    //   printf("hhhhhhhhh");
                    //  printf("k===============%d\n",ara[te]-pt);
                    for(j=ara[te]; j<=(ara[te]-pt); j++)
                    {
                        if(qm[j]!=0)
                        {
                            //   printf("j============%lld %lld\n",j,hp);
                            if((j>hp)||(j==hp && qm[j]<wt))
                            {
                                //     printf("kkkkkkkkkkkkkkkkkkkkkkkkkkk%lld",j);
                                hp=j;
                                if(wt!=qm[j])
                                {
                                    if(i!=1)
                                        wc=1;
                                    fe=i;
                                }
                                wt=qm[j];
                            }
                        }
                    }
                }
                else
                {
                    if((ara[te]>hp)||(ara[te]==hp && te<wt))
                    {
                        hp=ara[te];
                        /*
                        if(wt==te)
                        {
                            k=1;
                            fe=i;
                        }
                        */
                        if(wt!=te)
                        {
                            if(i!=1)
                                wc=1;
                            fe=i;
                        }
                        wt=te;
                    }
                }
            }
            if(wc==0)
                printf("0\n");
            else
                printf("%lld\n",fe);
        }
    }
}
