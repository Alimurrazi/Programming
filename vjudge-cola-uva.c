#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,m,r=0;
    while(scanf("%d",&n)!=EOF)
    {
        k=n;
        while(n!=1)
        {
            r=n/3;
            k=k+r;
            m=fmod(n,3);
            n=r+m;
            if(n==2)
            {
                n=n+1;
                r=n/3;
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
