#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t,ans;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&m,&n);
        if(m==1)
            ans=n;
        else if(n==1)
            ans=m;
        else if(m==2)
        {
            ans=(n/4)*4;
            if(n%4==1)
                ans=ans+2;
            else if(n%4>1)
                ans=ans+4;
        }
        else if(n==2)
        {
            ans=(m/4)*4;
            if(m%4==1)
                ans=ans+2;
            else if(m%4>1)
                ans=ans+4;
        }
        else
        {
            k=m*n;
            if(k%2==0)
                ans=k/2;
            else
                ans=(k/2)+1;
        }
        printf("Case %d: %d\n",i,ans);
    }
}
