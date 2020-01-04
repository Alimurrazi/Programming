/*
 2 1
 2 3
 3 4
 1 4

 2 1
 6 2
 7 6
 3 1
 5 3
 2 5
 4 3
*/
#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

vector<int>ans,depends[100];
int taken[100];

void take(int p)
{
    int i,j;
    //printf("first p=%d\n",p);
    if(!taken[p])
    {
        //printf("p=%d ",p);
        for(i=0; i<depends[p].size(); i++)
        {
            //printf("depends=%d ",depends[p][i]);
            take(depends[p][i]);
            //printf("mid=%d i=%d\n",p,i);
        }
        ans.push_back(p);
        taken[p]=1;
        //printf("last p=%d\n",p);
    }
}

int main()
{
    int i,j,k,l,m=1,n=2,x,y;
    for(i=0; i<m; i++)
    {
        scanf("%d%d",&x,&y);
        depends[x].push_back(y);
    }
    for(i=1; i<=n; i++)
        taken[i]=0;
    for(i=1; i<=n; i++)
        take(i);
//take(2);
    for(i=n-1; i>=0; i--)
        printf("%d\n",ans[i]);
}
