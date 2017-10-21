#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    deque<int>q;
    string s1,s2;
    int i,j,k,l,m,n,t,c;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        printf("Case %d:\n",i);
        scanf("%d%d",&n,&c);
        k=0;
        for(j=1; j<=c; j++)
        {
            cin>>s1;
            if(s1=="pushLeft" || s1=="pushRight")
            {
                scanf("%d",&m);
                if(k==n)
                    printf("The queue is full\n");
                else
                {
                    if(s1=="pushLeft")
                    {
                        q.push_front(m);
                        printf("Pushed in left: %d\n",m);
                    }
                    else
                    {
                        q.push_back(m);
                        printf("Pushed in right: %d\n",m);
                    }
                    k++;
                }
            }
            if(s1=="popLeft" || s1=="popRight")
            {
                if(k==0)
                    printf("The queue is empty\n");
                else
                {
                    if(s1=="popLeft")
                    {
                        l=q.front();
                        printf("Popped from left: %d\n",l);
                        q.pop_front();
                    }
                    else
                    {
                        l=q.back();
                        printf("Popped from right: %d\n",l);
                        q.pop_back();
                    }
                    k--;
                }
            }
        }
        q.clear();
    }
}
