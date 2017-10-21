#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,t,f,e;
    char str[100];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",str);
        l=strlen(str);
        k=0;
        for(f=0,e=l-1; ; f++,e--)
        {
            if(f>=e)
                break;
            if(str[f]!=str[e])
            {
                k=1;
                break;
            }
        }
        if(k==1)
            printf("Case %d: No\n",i);
        else
            printf("Case %d: Yes\n",i);
    }
}
