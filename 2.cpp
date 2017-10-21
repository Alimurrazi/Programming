#include<stdio.h>

bool check(long long a)
{
    long long i,j,k,l;
    if(a==2)
        return true;
    if(a%2==0)
        return false;
    for(i=3; i*i<=a; i=i+2)
    {
        if(a%i==0)
            return false;
    }
    return true;
}

int main()
{
    bool ch=true;
    long long i,j,k,l,m,n,x,y;
    long long h=0;
    while(scanf("%lld",&n)==1)
    {
       //    printf("%lld ",n);
        h=n;
        ch=true;
        m=0;
        while(n!=0)
        {
            k=n%10;
            if(k==6)
                k=9;
            else if(k==9)
                k=6;
            else if(k==3 || k==4 || k==7)
            {
                ch=false;
                break;
            }
            m=m*10+k;
            n=n/10;
        }
        if(ch==false)
            printf("no\n");
        else
        {
        //    printf("%d ",m);
            if(m==1)
            {
                printf("no\n");
                continue;
            }
            if(check(m)==true && check(h)==true)
                printf("yes\n");
            else
                printf("no\n");
        }
    }
}
