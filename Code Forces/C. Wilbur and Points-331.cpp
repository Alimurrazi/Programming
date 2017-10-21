#include<bits\stdc++.h>
using namespace std;

pair<int , int>ara[100005];
pair<int , int>reara[100005];
map<int, int>wara;
map<int, int>index[100005];
map<int, int>windex;

int main()
{
    int i,j,l,k,m,n,x,y;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&x,&y);
        ara[i].first=x;
        ara[i].second=y;
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&k);
        wara[k]++;
        m=wara[k];
        index[m][k]=i;
    }
    for(i=0; i<n; i++)
    {
        k=ara[i].second-ara[i].first;
        if(wara[k]!=0)
        {
            windex[k]=windex[k]+1;
            reara[index[windex[k]][k]].first=ara[i].first;
            reara[index[windex[k]][k]].second=ara[i].second;
            wara[k]=wara[k]-1;
        }
        else
            break;
    }
    if(i==n)
    {
        for(i=1;i<n;i++)
        {
         k=i-1;
         if(reara[i].first<reara[i-1].first && reara[i].second<reara[i-1].second)
         {
          break;
         }
        }
        if(i==n)
        {
        printf("YES\n");
        for(j=0; j<n; j++)
            printf("%d %d\n",reara[j].first,reara[j].second);
        }
        else
            printf("NO\n");
    }
    else
        printf("NO\n");
    wara.clear();
    windex.clear();
}
