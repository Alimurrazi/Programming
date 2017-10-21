#include<stdio.h>
#include<vector>
#include<map>
using namespace std;

vector<int>q[200005];
map<int,int>q1;

int main()
{
    int i,j,k,l,m,n,t;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&m);
            if(q1[m]!=0)
            {
             q[q1[m]]++;
            }
            else
            q1[m]=i;
        }
    }
}
