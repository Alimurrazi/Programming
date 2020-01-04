#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;

vector<int>input;
vector<int>path;
stack<int>q;

void lis()
{
    int i,j,k,l,high,index;
    path.resize(input.size());
    for(i=0; i<input.size(); i++)
        path[i]=1;
    high=0,index=0;
    for(i=0; i<input.size(); i++)
    {
        for(j=i+1; j<input.size(); j++)
        {
            if(input[i]<input[j])
            {
                if(path[j]<path[i]+1)
                {
                    path[j]=path[j]+1;
                    if(path[j]>high)
                    {
                        high=path[j];
                    }
                }
            }
        }
        if(path[i]>path[index])
            index=i;
    }
    printf("%d\n",high);
    q.push(input[index]);
    for(i=index-1; i>=0; i--)
    {
        if(path[i]==path[index]-1 && input[i]<input[index])
        {
            index=i;
            q.push(input[index]);
        }
    }
    while(!q.empty())
    {
        k=q.top();
        printf("%d\n",k);
        q.pop();
    }
}

int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d",&m)==1)
    {
        input.push_back(m);
    }
    lis();
}
