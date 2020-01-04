#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int ara[100];
bool check[100];
vector<int>result;
int n;

void call()
{
    int i,j,k,l,m;
    if(result.size()==6)
    {
        for(i=0; i<6; i++)
        {
            if(i>0)
            printf(" ");
            printf("%d",result[i]);
        }
        printf("\n");
        return;
    }
    for(i=0; i<n; i++)
    {

        {
            if(result.size()==0 && check[i]==0)
            {
                check[i]=1;
                result.push_back(ara[i]);
                call();
                check[i]=0;
                result.pop_back();
            }
            if(result.size()!=0 && check[i]==0 && ara[i]>=result[result.size()-1])
            {
                check[i]=1;
                result.push_back(ara[i]);
                call();
                check[i]=0;
                result.pop_back();
            }
        }
    }
}

int main()
{
    int j=0,k,l,m,i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            return 0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }
        sort(ara,ara+i);
        if(j==1)
            printf("\n");
        memset(check,0,sizeof(check));
        call();
        result.clear();
        j=1;
    }
}
