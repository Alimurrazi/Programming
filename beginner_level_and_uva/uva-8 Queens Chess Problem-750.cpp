#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;

struct data
{
    int c1,c2,c3,c4,c5,c6,c7,c8;
    bool operator < (const data & p)const
    {
        if(p.c1>c1)
            return false;
        if(p.c1==c1 && p.c2>c2)
            return false;
        if(p.c1==c1 && p.c2==c2 && p.c3>c3)
            return false;
        if(p.c1==c1 && p.c2==c2 && p.c3==c3 && p.c4>c4)
            return false;
        if(p.c1==c1 && p.c2==c2 && p.c3==c3 && p.c4==c4 && p.c5>c5)
            return false;
        if(p.c1==c1 && p.c2==c2 && p.c3==c3 && p.c4==c4 && p.c5==c5 && p.c6>c6)
            return false;
        if(p.c1==c1 && p.c2==c2 && p.c3==c3 && p.c4==c4 && p.c5==c5 && p.c6==c6 && p.c7>c7)
            return false;
        if(p.c1==c1 && p.c2==c2 && p.c3==c3 && p.c4==c4 && p.c5==c5 && p.c6==c6 && p.c7==c7 && p.c8>c8)
            return false;
        return true;
    }
};

int ix,iy;
bool ccheck[20];
bool d1check[20];
bool d2check[20];
vector<int>row;
vector<int>coloum;
int length=0;
int dp[100][20];
data u,v;
priority_queue<data>q;

void call(int n)
{
    int i,j,k,l;
    if(row.size()==8)
    {
        for(i=0; i<8; i++)
        {
            dp[length][coloum[i]]=row[i];
        }
        length++;
        return ;
    }
    if(n==ix)
    {
        call(n+1);
        return;
    }
    for(i=1; i<=8; i++)
    {
        if(ccheck[i]==false && d1check[n+i]==false && d2check[n-i+8]==false)
        {
            ccheck[i]=d1check[n+i]=d2check[n-i+8]=true;
            row.push_back(n);
            coloum.push_back(i);
            call(n+1);
            ccheck[i]=d1check[n+i]=d2check[n-i+8]=false;
            row.pop_back();
            coloum.pop_back();
        }
    }
}

int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(l=0; l<t; l++)
    {
        if(l!=0)
            printf("\n");
        scanf("%d%d",&ix,&iy);
        memset(ccheck,false,sizeof(ccheck));
        memset(d1check,false,sizeof(d1check));
        memset(d2check,false,sizeof(d2check));
        ccheck[iy]=true;
        d1check[ix+iy]=true;
        d2check[ix-iy+8]=true;
        row.push_back(ix);
        coloum.push_back(iy);
        length=0;
        call(1);
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        for(i=0; i<length; i++)
        {
            u.c1=dp[i][1];
            u.c2=dp[i][2];
            u.c3=dp[i][3];
            u.c4=dp[i][4];
            u.c5=dp[i][5];
            u.c6=dp[i][6];
            u.c7=dp[i][7];
            u.c8=dp[i][8];
            q.push(u);
        }
        k=1;
        while(!q.empty())
        {
            u=q.top();
            printf("%2d      %d %d %d %d %d %d %d %d\n",k,u.c1,u.c2,u.c3,u.c4,u.c5,u.c6,u.c7,u.c8);
            q.pop();
            k++;
        }
        row.clear();
        coloum.clear();
    }
}
