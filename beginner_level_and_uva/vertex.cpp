
 #include<cstdio>
 #include<vector>
 #include<queue>
 #include<string.h>
 using namespace std;

 int n,i;
// vector< vector<int> > L;
 vector<int>L[101];
 bool visited[101];

 void unreachable(int v){
     //fill(visited,visited+n,false);
     memset(visited,false,sizeof(visited));
     queue<int> Q;
     Q.push(v);

     int aux;

     while(!Q.empty()){
         aux=Q.front();
         Q.pop();

         for(int i=0;i<L[aux].size();i++){
             if(visited[L[aux][i]]) continue;
             visited[L[aux][i]]=true;
             Q.push(L[aux][i]);
         }
     }

     int cont=0;

     for(int i=1;i<=n;i++) if(!visited[i]) cont++;

     printf("%d",cont);

     for(int i=1;i<=n;i++) if(!visited[i]) printf(" %d",i);
     printf("\n");
 }

 int main(){
     int a,b,m;

     while(1){
         scanf("%d",&n);
         if(n==0) break;

        // L.clear();
        // L.resize(n+1);
         for(i=0;i<=100;i++)
         L[i].clear();

         while(1){
             scanf("%d",&a);
             if(a==0) break;

             while(1){
                 scanf("%d",&b);
                 if(b==0) break;

                 L[a].push_back(b);
             }
         }

         scanf("%d",&m);

         for(int i=0;i<m;i++){
             scanf("%d",&a);
             unreachable(a);
         }
     }

     return 0;
 }
