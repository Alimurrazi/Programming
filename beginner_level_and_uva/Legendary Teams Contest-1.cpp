/*
  7
  1 2 3
  4 5 6
  4 7 3
  8 7 3
  8 9 10
  5 11 12
  13 14 15
*/
#include<stdio.h>
#include<iostream>
#include<map>
#include<vector>
using namespace std;

map < int , int > q;
vector<int>edge[20];
string s;
int n,high=0;

int call()
{
    int i,j,k,l;
    k=0;
    for(i=0; i<n; i++)
    {
        if(q[edge[i][0]]==0 && q[edge[i][1]]==0 && q[edge[i][2]]==0)
        {
            k++;
            if(k>high)
                high=k;
            q[edge[i][0]]=1 , q[edge[i][1]]=1 , q[edge[i][2]]=1 ;
            call();
            q[edge[i][0]]=0 , q[edge[i][1]]=0 , q[edge[i][2]]=0 ;
        }
        // if(k>high)
        //     high=k;
    }
    cout<<"high"<<high<<endl;
//   return high;
}

int main()
{
    int i,j,k,l,m;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<3; j++)
            {
                cin>>l;
                edge[i].push_back(l);
                q[edge[i][j]]=0;
            }
        }
        k=call();
        cout<<k<<endl;
    }
}
