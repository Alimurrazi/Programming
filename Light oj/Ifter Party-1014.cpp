#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<long long>q;

int main()
{
    long long i,j,k,l,m,n,p,t,a,b,c;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&p,&l);
        a=0;
        p=p-l;
        for(j=1; (j*j)<=p; j++)
        {
            if((p%j)==0)
            {
                if(j>l)
                {
                    q.push_back(j);
                    a++;
                }
                if((p/j)==j)
                    continue;
                if((p/j)>l)
                {
                    q.push_back(p/j);
                    a++;
                }
            }
        }
        if(a==0)
            printf("Case %lld: impossible\n",i);
        else
        {
            sort(q.begin(),q.end());
            printf("Case %lld:",i);
            for(j=0; j<q.size(); j++)
            {
                printf(" ");
                printf("%lld",q[j]);
            }
            q.clear();
            printf("\n");
        }
    }
}
