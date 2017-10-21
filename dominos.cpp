
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <iostream>
#include <stack>
#include <set>
#include <cstring>
#include <stdlib.h>
#include <cmath>
using namespace std;
typedef long long LL;
typedef pair<int, int> P;
const int maxn = 100000 + 5;
const int INF = 1000000000;

int V;
vector<int> G[maxn];
vector<int> rG[maxn];
vector<int> vs;
bool used[maxn];
int cmp[maxn];

void add_edge(int from, int to){
    G[from].push_back(to);
    rG[to].push_back(from);
}

void dfs(int v){
    used[v] = true;
    for(int i = 0;i < G[v].size();i++){
        if(!used[G[v][i]]) dfs(G[v][i]);
    }
    vs.push_back(v);
}

void rdfs(int v, int k){
    used[v] = true;
    cmp[v] = k;
    for(int i = 0;i < rG[v].size();i++){
        if(!used[rG[v][i]]) rdfs(rG[v][i], k);
    }
}

int scc(){
    memset(used, 0, sizeof(used));
    vs.clear();
    for(int i = 0;i < V;i++){
        if(!used[i]) dfs(i);
    }
    memset(used, 0, sizeof(used));
    int k = 0;
    for(int i = vs.size()-1;i >= 0;i--){
        if(!used[vs[i]]) rdfs(vs[i], k++);
    }
    return k;
}

P p[maxn];

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int m;
        scanf("%d%d", &V, &m);
        for(int i = 0;i < maxn;i++){
            G[i].clear();
            rG[i].clear();
        }
        while(m--){
            int x, y;
            scanf("%d%d", &x, &y);
            x--;y--;
            add_edge(x, y);
        }

        int k = scc();

        for(int i = 0;i < V;i++){
            p[i] = P(cmp[i], i);
        }
        sort(p, p+V);
        memset(used, 0, sizeof(used));
        int ans = 0;
        for(int i = 0;i < V;i++){
            int u = p[i].second;
            if(!used[u]){
                dfs(u);
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
