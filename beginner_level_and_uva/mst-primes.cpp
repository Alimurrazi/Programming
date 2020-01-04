#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;

vector <int> vec[2000];
vector <int> cost[2000];

struct data
{
	int city,dist;
	bool operator < (const data & p)const
	{
	  return p.dist<dist;
	}
};

void mst(int src,int n)
{
	priority_queue<data>pq;
	int visited[2000],i,u,v,sum=0,j,p;
	for(i=1;i<n;i++)
	{
		u=src;
		printf("%d ",u);
		visited[src]=1;
		for(j=0;j<vec[u].size();j++)
		{
			v=vec[u][j];
			if(visited[v]==0)
			{
				data D;
				D.city=v;
				D.dist=cost[u][j];
				pq.push(D);
			}
		}

      //while(visited[src]!=1)
	//	do
        data T=pq.top();
		src=T.city;
		p=T.dist;
		pq.pop();
	  // while(visited[src]!=1);
	   while(1)
        {
        if(visited[src]==0)
        break;
		data T=pq.top();
		src=T.city;
		p=T.dist;
		pq.pop();
		}
	//	while(visited[src]==1);
		sum+=p;
	}
	printf("%d",sum);
}

int main()
{
	int n,e,n1,n2,w,i;
	scanf("%d%d",&n,&e);
	for(i=0;i<e;i++)
	{
		scanf("%d%d%d",&n1,&n2,&w);
		vec[n1].push_back(n2);
		vec[n2].push_back(n1);
		cost[n1].push_back(w);
		cost[n2].push_back(w);
	}
	mst(1,n);
	return 0;
}
