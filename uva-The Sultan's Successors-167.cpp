#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

int  ara[10][10];
bool ccheck[20];
bool d1check[20];
bool d2check[20];
vector<int>row;
vector<int>coloum;
int besi=0;

void nqueen(int n)
{
    int i,x,y,k=0;
    if(row.size()==8)
    {
        for(i=0; i<8; i++)
        {
            x=row[i];
            y=coloum[i];
            k=k+ara[x][y];
        }
        if(k>besi)
            besi=k;
        return ;
    }
    for(i=1; i<=8; i++)
    {
        if(ccheck[i]==false && d1check[n+i]==false && d2check[n-i+8]==false)
        {
            ccheck[i]=d1check[n+i]=d2check[n-i+8]=true;
            row.push_back(n);
            coloum.push_back(i);
            nqueen(n+1);
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
    while(t--)
    {
        for(i=1; i<=8; i++)
        {
            for(j=1; j<=8; j++)
                scanf("%d",&ara[i][j]);
        }
        memset(ccheck,false,sizeof(ccheck));
        memset(d1check,false,sizeof(d1check));
        memset(d2check,false,sizeof(d2check));
        besi=0;
        nqueen(1);
        printf("%5d\n",besi);
        row.clear();
        coloum.clear();
    }
}
