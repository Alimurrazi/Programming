#include<stdio.h>
#include<math.h>
#include<iostream>
#include<vector>
using namespace std;

int dist(int x1,int x2,int y1,int y2)
{
    int k,m;
    k=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    k=sqrt(k);
    return k;
}

int main()
{
    int i,j,k,l,m,n,a,b,x1,x2,x3,y1,y2,y3,x4,y4;
    while(cin>>n)
    {
        if(n==1)
        {
            scanf("%d%d",&x1,&y1);
            printf("-1\n");
        }
        if(n==2)
        {
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            if(x1==x2 || y1==y2)
                printf("-1\n");
            else
            {
                x3=x2;
                y3=y1;
                k=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
                k=sqrt(k);
                m=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
                m=sqrt(m);
                k=k*m;
                cout<<k<<endl;
            }
        }
        l=0;
        if(n==3)
        {
            scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
            if(x1==x2)
            {
                k=dist(x1,x1,y1,y2);
                m=dist(x3,x1,y3,y3);
            }
            else if(x1==x3)
            {
                k=dist(x1,x1,y1,y3);
                m=dist(x2,x1,y2,y2);
            }
            else
            {
                k=dist(x2,x2,y2,y3);
                m=dist(x1,x2,y1,y1);
            }
            k=k*m;
            cout<<k<<endl;
        }
        if(n==4)
        {
            scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
            if(x1==x2)
            {
                k=dist(x1,x1,y1,y2);
                m=dist(x3,x1,y3,y3);
            }
            else if(x1==x3)
            {
                k=dist(x1,x1,y1,y3);
                m=dist(x2,x1,y2,y2);
            }
           else if(x1==x4)
            {
                k=dist(x1,x1,y1,y4);
                m=dist(x2,x1,y2,y2);
            }
            k=k*m;
            cout<<k<<endl;
        }
    }
}
