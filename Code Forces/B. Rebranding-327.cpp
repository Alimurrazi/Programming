#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

char str[200005];
char instr[5];
vector<int>ara[123];
queue<int>q1;
queue<int>q2;

int main()
{
    int i,j,k,l,m,n;
    int x,y;
    while(scanf("%d%d",&l,&n)==2)
    {
        scanf("%s%*c",str);
        for(i=0; i<l; i++)
        {
            k=str[i];
            ara[k].push_back(i);
        }
        for(i=0; i<n; i++)
        {
            gets(instr);
            x=instr[0];
            y=instr[2];
            for(j=0; j<ara[x].size(); j++)
            {
                k=ara[x][j];
                str[k]=y;
                q1.push(k);
            }
            for(j=0; j<ara[y].size(); j++)
            {
                k=ara[y][j];
                str[k]=x;
                q2.push(k);
            }
            if(ara[x].size())
                ara[x].clear();
            if(ara[y].size())
                ara[y].clear();
            while(!q1.empty())
            {
                k=q1.front();
                ara[y].push_back(k);
                q1.pop();
            }
            while(!q2.empty())
            {
                k=q2.front();
                ara[x].push_back(k);
                q2.pop();
            }
        }
        for(i='a'; i<='z'; i++)
        {
            if(ara[i].size())
            {
                ara[i].clear();
            }
        }
        printf("%s\n",str);
    }
}
