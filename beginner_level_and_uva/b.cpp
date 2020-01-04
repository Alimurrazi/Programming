#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int ara[33000];
vector<int>q[33000];
vector<int>q1[33000];
vector<int>q2[33000];
int l,k;

int funct()
{
    int i,j,m,n,a,b,wi,c,d,e,f,g,h,s;
    s=0;
    if(q[l].size()==1)
    {
        h=q1[l][0];
        printf("%d\n",h);
        for(i=0; i<q2[h].size(); i++)
        {
            if(i!=0)
                printf(" ");
            printf("%d",q2[h][i]);
        }
        printf("\n");
        return -1;
    }
    for(i=0; i<q[l].size(); )
    {
        //  printf("i==%d\n",i);
        a=i;
        b=i+1;
        if(q[l][a]>=q[l][b])
        {
            h=q1[l][a];
            m=l+1;
            if((q[l][a]-q[l][b]+k)<ara[h])
                //q[0][s].push_back(12);
                // printf("k");
                q[l+1].push_back(q[l][a]-q[l][b]+k);
            else
                q[l+1].push_back(ara[h]);
            q1[l+1].push_back(q1[l][a]);
            i=i+2;
            s=s+1;
            q2[h].push_back(q1[l][b]);
            // printf("k\n");
        }
        //   */
        //   /*
        else if(q[l][b]>q[l][a])
        {
            h=q1[l][b];
            if((q[l][b]-q[l][a]+k)<ara[h])
                q[l+1].push_back(q[l][b]-q[l][a]+k);
            else
                q[l+1].push_back(ara[h]);
            q1[l+1].push_back(q1[l][b]);
            i=i+2;
            s=s+1;
            q2[h].push_back(q1[l][a]);
        }
        //   */
    }
    l=l+1;
    return 0;
}
//}
int main()
{
    int i,j,m,n,o,p,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&k);
        n=pow(2,n);
        for(j=1; j<=n; j++)
        {
            scanf("%d",&m);
            ara[j]=m;
            q[0].push_back(m);
            q1[0].push_back(j);
        }
        l=0;
        int p;
        while(1)
        {
            //   printf("l===%d\n",l);
            //   if(q[l].size()==1)
            //       break;
            p=funct();
            if(p==-1)
                break;
        }
        for(j=0; j<=l; j++)
        {
            q[j].clear();
            q1[j].clear();
        }
        //  n=n/2;
        for(j=0; j<n; j++)
        {
            q2[j].clear();
        }
        /*
        j=0;
        while(!q[j].empty())
        {
            q[j].clear();
            j++;
        }
        */
        /*
        j=0;
        while(!q2[j].empty())
        {
            q2[j].clear();
            j++;
        }
        */
    }
}
