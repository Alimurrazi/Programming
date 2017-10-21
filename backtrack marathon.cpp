#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;

bool check[100];
char str[100]={"abca"};
vector<int>ans;

void call()
{
    int i,j;
    if(ans.size()==4)
    {
     for(i=0;i<4;i++)
     printf("%c ",ans[i]);
     printf("\n");
     return ;
    }
    for(i=0;i<4;i++)
    {
        if(check[i]==false)
        {
        check[i]=true;
        ans.push_back(str[i]);
        call();
        check[i]=false;
        ans.pop_back();
        }
    }
}

int main()
{
    memset(check,false,sizeof(check));
    call();
}
