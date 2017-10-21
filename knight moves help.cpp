#include<bits/stdc++.h>

using namespace std;
string s1,s2;

bool visit[10][10];
int cost[10][10];
int Dx[]= {-2,-1, 1, 2, 2,1,-1,-2};
int Dy[]= {-1,-2,-2,-1, 1,2, 2, 1};

void bfs(int sx,int sy,int dx,int dy)
{
    queue< pair<int,int> >Q;
    pair<int, int>pii;
    pii.first=sx;
    pii.second=sy;
    Q.push(pii);
    cost[sx][sy]=0;
    memset(visit,0,sizeof(visit));
    memset(cost,0,sizeof(cost));
    visit[sx][sy]=true;
    while(!Q.empty())
    {
        pii=Q.front();
        Q.pop();
        // if(pii.first==dx && pii.second==dy)
        //   cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<cost[pii.first][pii.second]<<" knight moves.\n";
        // return ;
        visit[pii.first][pii.second]=true;
        for(int k=0; k<8; k++)
        {
            int x=pii.first+Dx[k];
            int y=pii.second+Dy[k];
            if(x>=1 && x<=8 && y>=1 && y<=8 && !visit[x][y])
            {
                visit[x][y]=true;
                cost[x][y]=cost[pii.first][pii.second]+1;
                Q.push(make_pair(x,y));
            }
        }
    }
    cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<cost[pii.first][pii.second]<<" knight moves.\n";
}
int main()
{
    int dx,dy,sx,sy;

    while(cin>>s1>>s2)
    {
        sx=s1[0]-96;
        sy=s1[1]-'0';

        dx=s2[0]-96;
        dy=s2[1]-'0';
        //  printf("%d %d %d %d\n",sx,sy,dx,dy);
        bfs(sx,sy,dx,dy);

    }
    return 0;
}

