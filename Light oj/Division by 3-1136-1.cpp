#include<stdio.h>

int div(int n)
{
    if(n%3==0)
        return 1;
    if((n+1)%3==0)
        return 1;
    return 0;
}

int main()
{
    int i,j,k,l,m,n,t,f;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&f,&l);
        if(div(f)==1 && div(l)==1)
        {
            k=(l-f)+1;
            k=k-(k/3);
        }
        if(div(f)==0 && div(l)==0)
        {
            k=(l-f)+1;
            k=k-((k/3)+1);
        }
        if((div(f)==0 && div(l)==1)||(div(f)==1 && div(l)==0))
        {
            k=(l-f)+1;
            if(k%3==0)
                l=k/3;
            else
                l=(k/3)+1;
            k=k-l;
        }
        printf("Case %d: %d\n",i,k);
    }
}
