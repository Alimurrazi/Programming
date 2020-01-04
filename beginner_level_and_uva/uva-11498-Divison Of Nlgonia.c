#include<stdio.h>
int main()
{
    int a;
    long long k,n,m,x,y;
    while(scanf("%lld",&k))
    {
      if(k==0)
         return 0;
       scanf("%lld%lld",&n,&m);
        while(k--)
        {
            scanf("%lld%lld",&x,&y);
            if(x==n||y==m)
            {
                printf("divisa\n");
                continue;
            }
            else if(x>n&&y>m)
            {
                printf("NE\n");
                continue;
            }
            else if(x>n&&y<m)
            {
                printf("SE\n");
                continue;
            }
            else if(x<n&&y<m)
            {
                printf("SO\n");
                continue;
            }
            else if(x<n&&y>m)
            {
                printf("NO\n");
                continue;
            }
        }
    }
    return 0;
}
