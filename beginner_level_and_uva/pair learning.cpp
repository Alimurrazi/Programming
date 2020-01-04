#include<bits\stdc++.h>
using namespace std;

int main()
{
    /*
    map < int , int > edge;
    edge[-1]=2;
    cout<<edge[-1]<<endl;
    */
    pair <int ,int > edge[100];
   // edge.push_back(2);
    edge[1].first=0;
    edge[1].second=1;
    edge[-1].first=2;
    edge[-1].second=3;
    cout<<edge[1].first<<" "<<edge[1].second<<endl;
    cout<<edge[-1].first<<" "<<edge[-1].second<<endl;
    //cout<<edge[1]<<endl;
}
