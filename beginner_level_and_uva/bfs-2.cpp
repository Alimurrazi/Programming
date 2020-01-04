#include<stdio.h>
#include<queue>
#include<vector>
using namespace std;

vector<int> edge[100], cost[100];
const int infinity = 1000000000;

//edge[i][j] = jth node connected with i
//cost[i][j] = cost of that edge

int bfs(int source, int destination) {

    int d[100];
    int i,u;
    for(i=0; i<100; i++) d[i] = infinity;

    queue<int> q;
    q.push( source );
    d[ source ] = 0;

    while( !q.empty() ) {
        u = q.front(); q.pop();
        printf("%d ",u);
        int ucost = d[ u ];
        printf("ucost=%d ",ucost);
        for(i=0; i<edge[u].size(); i++) {
           printf("edge=%d ",edge[u][i]);
            int v = edge[u][i], vcost = cost[ u ][i] + ucost;

            // updating - this part is also called relaxing
            if( d[v] > vcost ) {
                d[v] = vcost;
                q.push( v );
            }
        }
        printf("i=%d\n",i);
    }

    return d[ destination ];
}

int main()
{
 int x,y,k;
 while(scanf("%d%d%d",&x,&y,&k)==3)
 {
  if(x==0 && y==0 && k==0)
    break;
 edge[x].push_back(y);
 edge[y].push_back(x);
 cost[x].push_back(k);
 cost[y].push_back(k);

 }
 printf("%d",bfs(1,3));
}
