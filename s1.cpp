#include<bits/stdc++.h>
using namespace std;

bool check[100000005];
vector<int>store;

void prime()
{
    /*
    int i,j,k,l,m,n,t;
    for(i=3;i*i<=100000000;i=i+2)
    {
    if(check[i]==false)
    {
     for(j=i*3;j<=100000000;j=j+2*i)
            check[j]=true;
    }
    }

    store.push_back(2);
    */
    int i;
    for(i=3;i<=100000000;i=i+2)
    {
        if(check[i]==false)
            store.push_back(i);
    }
}

int main()
{
    long long i,j,k,l,m,n;
    prime();

}
