#include<stdio.h>

void binary()
{
    long long i,k,l,m=0,n,j=0;
    for(i=16 ; i<=31; i++)
    {
        k=i;
        l=0;
        while(k!=0)
        {
            if(k%2==0)
                l++;
            if(l>1)
                break;
            k=k/2;
        }
        if(l==1)
        {
            j++;
            printf("j==%lld i==%lld  %lld\n",j,i,i-m);
            m=i;
        }
    }
}

int main()
{
    int i,j,k,l,m,n;
    binary();
}
