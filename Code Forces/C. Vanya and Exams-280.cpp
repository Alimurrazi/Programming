#include<bits\stdc++.h>
using namespace std;

struct data
{
    long long credit,essay;
    bool operator < (const data & p)const
    {
        if(p.essay>essay)
            return false;
        return true;
    }

};

priority_queue<data>q;

int main()
{
    long long i,j,k,l,m,n,t,r,avg,aace,dorkar,c,e;
    data u,v;
    while(cin>>n>>r>>avg)
    {
        aace=0;
        for(i=0; i<n; i++)
        {
            cin>>c>>e;
            aace=aace+c;
            if(c!=r)
            {
                u.credit=c;
                u.essay=e;
                q.push(u);
            }
        }
        dorkar=avg*n;
        k=0;
        if(aace<dorkar)
        {
            while(aace!=dorkar)
            {
                u=q.top();
                q.pop();
                m=dorkar-aace;
                if(m<=(r-u.credit))
                {
                    k=k+(m*u.essay);
                    aace=aace+m;
                }
                else
                {
                    k=k+((r-u.credit)*u.essay);
                    aace=aace+(r-u.credit);
                }
            }
        }
        cout<<k<<endl;
        if(q.empty())
        {
            while(!q.empty())
            {
                q.pop();
            }
        }
    }
}
