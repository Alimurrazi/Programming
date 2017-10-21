#include<stdio.h>
#include<map>
using namespace std;

int main()
{
    int ara[200000];
    int ara1[200000];
    map<int,int>check;
    int i,j,k,l,m,n,a,b,c,x,y;
    while(scanf("%d%d%d",&n,&k,&a)==3)
    {
    //    memset(check,false,sizeof(check));
        for(i=1; i<=n; i++)
            scanf("%d",&ara[i]);
        j=0;
        for(i=1; i<=a; i++)
        {
            scanf("%d%d",&x,&y);
            if(x==1)
            {
                ara1[j]=ara[y];
                j++;
                check[ara[y]]=1;
            }
            else
            {
                b=ara[y];
                if(check[b]==0)
                {
                    printf("NO\n");
                }
                else
                {
                    c=0;
                    int p=0;
                    for(l=0; l<j; l++)
                    {
                        if(ara1[l]>b)
                            c++;
                        if(ara1[l]==b)
                            p=1;
                        if(c==k)
                            break;
                    }
                    if(c<k && p==1)
                        printf("YES\n");
                    else
                    {
                        printf("NO\n");
                    }
                }
            }
        }
    }
}
