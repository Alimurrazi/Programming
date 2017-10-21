#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t,f;
    while(scanf("%d",&n)==1)
    {
        f=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&m);
            if(f>=m)
                f=f+1;
            else
                f=m;
        }
        printf("%d\n",f);
    }

}
