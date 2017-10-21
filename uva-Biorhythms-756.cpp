#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

//int ara[21255];
vector<int>ara;
vector<int>q;

int main()
{
    int p,e,i,d,inte,k,t=0;
    while(scanf("%d%d%d%d",&p,&e,&inte,&d)==4)
    {
        if(p==-1 && e==-1 && inte==-1 && d==-1)
            return 0;
  //      memset(ara,0,sizeof(ara));
        ara.resize(21252+100000);
        for(i=p; i<=d+21252  ; i=i+23)
        {
            ara[i]=ara[i]+1;
        }
        for(i=p; i>=0; i=i-23)
        {
            if(i==p)
                continue;
            ara[i]=ara[i]+1;
        }

        for(i=e;i<=21252  ; i=i+28)
        {
            ara[i]=ara[i]+1;
        }
        for(i=e; i>=0; i=i-28)
        {
            if(i==e)
                continue;
            ara[i]=ara[i]+1;
        }


        for(i=inte; i>=0; i=i-33)
        {
            if(i==inte)
                continue;
            ara[i]=ara[i]+1;
            if(ara[i]==3)
                q.push_back(i);
        }
        for(i=inte;i<=21252 ; i=i+33)
        {
            ara[i]=ara[i]+1;
            if(ara[i]==3)
                q.push_back(i);
        }

        for(i=0; i<q.size(); i++)
        {
            k=q[i];
            if(k>d)
                break;
        }
        q.clear();
        ara.clear();
        t++;
        printf("Case %d: the next triple peak occurs in %d days.\n",t,k-d);
    }
}
