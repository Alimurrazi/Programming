#include<stdio.h>

int main()
{
    long long m,x,k;
    while(scanf("%lld%lld",&m,&x)==2)
    {
        if(m==0 && x==0)
            return 0;
        if(x==0  || x==100 || m==1)
        {
            printf("Not found\n");
            continue;
        }
        k=(100*(m-1))/(100-x);
        if((100*(m-1))%(100-x)==0)
            k=k-1;
        if(k<m)
            printf("Not found\n");
        else
            printf("%lld\n",k);
    }
}
