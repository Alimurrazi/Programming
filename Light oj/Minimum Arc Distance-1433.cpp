#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,l,m,n,t;
    double ox,oy,ax,ay,bx,by,oa,ob,ab,ans,k;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&ox,&oy,&ax,&ay,&bx,&by);
        oa=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        ob=sqrt((ox-bx)*(ox-bx)+(oy-by)*(oy-by));
        ab=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
        k=((oa*oa)+(ob*ob)-(ab*ab))/(2*oa*ob);
        k=acos(k);
        ans=oa*k;
        printf("Case %d: %lf\n",i,ans);
    }
}
