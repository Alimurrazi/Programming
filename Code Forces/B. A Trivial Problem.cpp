#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector<int>edge[100005];

int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d",&n)==1)
    {
        for(i=1; ; i++)
        {
            k=0,j=1,m=0;
            while(1)
            {
                j=j*5;
                if(j>i)
                    break;
                m=m+floor(i/j);
            }
            if(m>n)
                break;
            edge[m].push_back(i);
        }
        printf("%d\n",edge[n].size());
        for(i=0; i<edge[n].size(); i++)
        {
            if(i!=0)
                printf(" ");
            printf("%d",edge[n][i]);
        }
        printf("\n");
    }
}
