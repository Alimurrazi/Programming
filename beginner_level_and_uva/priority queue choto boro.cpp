#include<stdio.h>
#include<queue>
using namespace std;

struct data
{
    int city,dist;
    bool operator < (const data & p)const
    {
        return p.dist>dist;
    }
};

int main()
{
    int i,j,k,l,m,n;
    priority_queue<int>q;
}
