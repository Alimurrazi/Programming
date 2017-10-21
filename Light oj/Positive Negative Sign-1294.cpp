#include<stdio.h>
int main()
{
    long long i,j,k,l,m,n,t,ans,first,last;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&n,&m);
        ans=0,first=1,l=1;
        while(1)
        {

            k=((2*first+(m-1))*m)/2;
            if(l%2==1)
                k=k*(-1);
            l++;
            ans=ans+k;
            first=first+m;
            if(first>n)
            {
                printf("Case %lld: %lld\n",i,ans);
                break;
            }
        }
    }
}
