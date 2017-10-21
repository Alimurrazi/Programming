#include<stdio.h>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

struct data
{
    int w;
    int s;
    int j;
    bool operator < (const data & p)const
    {
        if(p.w > w)
            return false;
        if(p.w==w && p.s <s)
            return false;
        if(p.w==w && p.s==s && p.j>j)
            return false;
        return true;
    }
};

priority_queue<data>q;
vector<int>input;
vector<int>winput;
vector<int>path;
stack<int>ans;
int length;

void lis()
{
    int i,j,k,l,index=0;
    path.resize(path.size());
    for(i=0;i<input.size();i++)
    path[i]=1;
    for(i=0;i<input.size();i++)
    {
//     for(j=i+1;j)
    }
}

int main()
{
    int i,j,k,l,m,n;
    data u,t;
    i=0;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
     winput.push_back(m);
     input.push_back(n);
     u.w=m;
     u.s=n;
     u.j=i;
     q.push(u);
     i++;
    }
    lis();
}
