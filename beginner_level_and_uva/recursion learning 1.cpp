#include<stdio.h>
#include<vector>
using namespace std;

vector<int>ara;

int rec(int n)
{
    printf("%d\n",n);
    int i,j,k,l,m;
    rec(n+1);
    if(n>10)
    return 0;
    ara.push_back(n);
   // rec(n+1);
    rec(n*n);
}

int main()
{
    ara.resize(200);
    rec(1);
}
