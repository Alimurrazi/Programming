#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;
int n;
int ara[30];
bool prime[50];
bool check[50];
vector<int>ans;
int serial;

void call()
{
    int i,j,k,m;
    if(ans.size()==n)
    {
        for(i=0; i<n; i++)
        {
            if(i>0)
                printf(" ");
            printf("%d",ans[i]);
        }
        printf("\n");
    }

    for(i=1;i<n;i++)
    {
     k=ara[i];
     if(check[k]==false)
     {
      m=ans.size();
      if(m==(n-1))
      {
       if(prime[k+ans[m-1]]==false || prime[k+ans[0]]==false)
       continue;
      }
      m=k+ans[m-1];
      if(prime[m]==false)
      continue;
      check[k]=true;
      ans.push_back(k);
      call();
      check[k]=false;
      ans.pop_back();
     }
    }
}

int main()
{
    int i,j,k,l,m,t;
    memset(prime,false,sizeof(prime));
    prime[2]=prime[3]=prime[5]=prime[7]=prime[11]=prime[13]=prime[17]=prime[19]=prime[23]=prime[29]=prime[31]=prime[37]=prime[41]=true;
    t=0;
    while(scanf("%d",&n)==1)
    {
        t++;
        memset(check,false,sizeof(check));
        for(i=0; i<n; i++)
            ara[i]=i+1;
       ans.push_back(1);
       if(t!=1)
       printf("\n");
       printf("Case %d:\n",t);
        call();
        ans.clear();
    }
}
