#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

int ara[100];
bool check[100];
vector<int>ans;
int length;

int call()
{
    int i,j,k,l;
    if(ans.size()==6)
    {
        for(i=0; i<6; i++)
        {
            if(i!=0)
                printf(" ");
            printf("%d",ans[i]);
        }
        printf("\n");
    }
    for(i=0; i<length; i++)
    {
        if(ans.size()==0)
        {
            if(check[i]==false)
            {
                check[i]=true;
                ans.push_back(ara[i]);
                call();
                check[i]=false;
                ans.pop_back();
            }
        }
        else
        {
            if(check[i]==false && ara[i]>=ans[ans.size()-1])
            {
                check[i]=true;
                ans.push_back(ara[i]);
                call();
                check[i]=false;
                ans.pop_back();
            }
        }
    }
}

int main()
{
    int i,j,k=0,l,m,n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            return 0;
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);
        sort(ara,ara+i);
        memset(check,false,sizeof(check));
        length=i;
        if(k==1)
        printf("\n");
        call();
        k=1;
        ans.clear();
    }
}
