#include<stdio.h>
#include<algorithm>
using namespace std;

struct data
{
    int h,m;
    bool operator < (const data & p)const
    {
        if(p.h>h)
        return false;
        if(p.h==h && p.m>m)
        return false;
    }
};

int main()
{
    struct data sett[10];
    data u,v;
    u.h=1;
    u.m=12;
    sett[0]=u;
    u.h=2;
    u.m=24;
    sett[1]=u;
    u.h=2;
    u.m=12;
    sett[2]=u;
    sort(sett,sett+3);
    for(int i=0;i<3;i++)
    printf("%d %d\n",sett[i].h,sett[i].m);
}
