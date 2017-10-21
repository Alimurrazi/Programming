#include<stdio.h>
#include<vector>
#include<string.h>
#include<map>
#include<iostream>
#include<queue>
using namespace std;

int length,h;
char str[25];
vector<char>q;
bool check[30];
map<string,int>stor;

struct data
{
    string s1;
    bool operator < (const data & p)const
    {
     int i;
     for(i=0;i<length;i++)
     {
      if(p.s1[i]>s1[i])
      return false;
      if(p.s1[i]==s1[i])
      continue;
      return true;
     }
    }
};

priority_queue<data>serial;

void call()
{
    int i,j;
    data u,v;
    string s="abcdefghijklmnopq";
    if(q.size()==length)
    {
        for(i=0; i<q.size(); i++)
        {
            s[i]=q[i];
        }
        s[i]='\0';
        if(stor[s]==0)
        {
            stor[s]=1;
             u.s1=s;
             serial.push(u);
        }
        return ;
    }
    for(i=0; i<length; i++)
    {
        if(check[i]==false)
        {
            q.push_back(str[i]);
            check[i]=true;
            call();
            check[i]=false;
            q.pop_back();
        }
    }
}

int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    for(l=0;l<t;l++)
    {
        if(l>0)
        printf("\n");
        scanf("%d%d",&length,&h);
        for(i=0; i<h; i++)
            str[i]='1';
        for(i=h; i<length; i++)
            str[i]='0';
        str[i]='\0';
        memset(check,false,sizeof(check));
        call();
        data u;
        while(!serial.empty())
        {
         u=serial.top();
         for(i=0;i<length;i++)
         {
          cout<<u.s1[i];
         }
         printf("\n");
         serial.pop();
         q.clear();
         stor.clear();
        }
    }
}
