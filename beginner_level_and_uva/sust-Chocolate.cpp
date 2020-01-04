#include<stdio.h>
#include<map>
#include<queue>
#include<string.h>
using namespace std;

bool check[1000005];
queue<int>q;
map < int , int > lmark;
map < int , int > rmark;
map < int , int > smark;

int main()
{
    int i,j,k,l,m,n,r,s,t;
    int ls,ln,rs,rn,ss,sn;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&l,&r,&s);
        memset(check,false,sizeof(check));
        for(j=0; j<l; j++)
        {
            scanf("%d",&n);
            if(check[n]==false)
            {
                q.push(n);
                check[n]=true;
            }
            lmark[n]=1;
        }
        for(j=0; j<r; j++)
        {
            scanf("%d",&n);
            if(check[n]==false)
            {
                q.push(n);
                check[n]=true;
            }
            rmark[n]=1;
        }
        for(j=0; j<s; j++)
        {
            scanf("%d",&n);
            if(check[n]==false)
            {
                q.push(n);
                check[n]=true;
            }
            smark[n]=1;
        }
        ls=0,ln=0,rs=0,rn=0,ss=0,sn=0;
        int p;
        while(!q.empty())
        {
            p=q.front();
            if(lmark[p]==1 && rmark[p]==0 && smark[p]==0)
                ls++;
            if(rmark[p]==1 && lmark[p]==0 && smark[p]==0)
                rs++;
            if(smark[p]==1 && lmark[p]==0 && rmark[p]==0)
                ss++;
            if(lmark[p]==0 && rmark[p]==1 && smark[p]==1)
                ln++;
            if(rmark[p]==0 && lmark[p]==1 && smark[p]==1)
                rn++;
            if(smark[p]==0 && lmark[p]==1 && rmark[p]==1)
                sn++;
            q.pop();
        }
        printf("Case #%d:\n",i);
        printf("%d %d\n",ls,ln);
        printf("%d %d\n",rs,rn);
        printf("%d %d\n",ss,sn);
        lmark.clear();
        rmark.clear();
        smark.clear();
    }
}
