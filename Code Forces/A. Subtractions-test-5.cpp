#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,k,l,m,n,a,b,c,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&a,&b);
        c=0;
        while(1)
        {
            if(a<=0 || b<=0)
                break;
            if(a>b)
                swap(a,b);
            c=c+(b/a);
            b=(b%a);
        }
        printf("%d\n",c);
    }
}
