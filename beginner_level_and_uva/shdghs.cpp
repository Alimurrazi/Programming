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
map<string,int>M;
vector<int>V[410];
vector<int>v;
bool taken[410];

void dfs(int p)
{
    //  printf("%d\n",V[p].size());
    int i,j;
//   for(i=0;i<V[p].size();i++)
    {
        //   printf("%d %d\n",p,V[p][i]);
    }
    // /*
    if(!taken[p])
    {
        for(i=0; i<V[p].size(); i++)
        {
            dfs(V[p][i]);
        }
        taken[p]=1;
    }
    // */
}

int main()
{
    string A,S,D,F;
    int a,s,d,f,g,n,h;
    while(scanf("%d",&n)==1)
    {
        A="";
        S="";
        D="";
        F="";
        memset(taken,0,sizeof(taken));

        D="::PROGRAM";

        s=1;
        for(int i=0; i<n; i++)
        {
            if(V[M[S]].size()>400)
            {
                break;
            }
            cin>>A>>a;
            if(M[A]==0)
            {
                M[A]=s++;

                /*
                string::size_type loc = A.find(D, 0 );
                if( loc != string::npos&&loc+9==A.size() )
                {
                    v.push_back(M[A]);
                }
                */
                int len=A.size();
                if(A[len-1]=='M' &&A[len-2]=='A' &&A[len-3]=='R' &&A[len-4]=='G' &&A[len-5]=='O' &&A[len-6]=='R' && A[len-7]=='P' && A[len-8]==':' && A[len-9]==':')
                    v.push_back(M[A]);
            }
            if(a==0)
                getchar();
            //   printf("jjj");
            for(int j=0; j<a; j++)
            {
                cin>>S;
                if(M[S]==0)
                {
                    M[S]=s++;


                    /*
                                    string::size_type loc = S.find(D, 0 );
                       if(s>410)
                    {
                    break;
                    }              if( loc != string::npos&&loc+9==A.size() )
                                    {
                                        v.push_back(M[S]);
                                    }
                      */
                    int len=S.size();
                    if(S[len-1]=='M' &&S[len-2]=='A' &&S[len-3]=='R' &&S[len-4]=='G' &&S[len-5]=='O' &&S[len-6]=='R' && S[len-7]=='P' && S[len-8]==':' && S[len-9]==':')
                        v.push_back(M[S]);

                }
                if(M[S]!=M[A])
                    {
                        V[M[S]].push_back(M[A]);
                        if(V[M[S]].size()>400)
                        {
                            break;
                        }

            }
            }
            if(V[M[S]].size()>400)
            {
                printf("878\n");
                continue;
            }

            }
        // printf("kkkk");
        //  printf("%d\n",v.size());
        int i;
        for(i=0; i<v.size(); i++)
        {
            //     printf("%d\n",v[0]);
            if(taken[v[i]]==0)
                dfs(v[i]);
        }
        //    printf("%d\n",i);
        int fn=0;
        for(i=1; i<=n; i++)
        {
            //   printf("i====%d   ",i);
            if(taken[i]==0)
            {
                //  printf("take ==%d\n",i);
                fn++;
            }
        }
        printf("%d\n",fn);
        M.clear();
        v.clear();
        for(int i=0; i<410; i++)
        {
            if(V[i].size()!=0)
                V[i].clear();
        }
    }
}

