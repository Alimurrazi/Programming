#include<stdio.h>
#include<string.h>

int main()
{
    char str[10005][30];
    char fstr[30];
    int lara[10005],hara[10005];
    int i,j,k,l,m,n,t,h,p;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        if(i!=1)
            printf("\n");
        scanf("%d",&m);
        for(j=1; j<=m; j++)
        {
            scanf("%s",str[j]);
            scanf("%d%d",&lara[j],&hara[j]);
        }
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%d",&k);
            p=0;
            for(l=1; l<=m; l++)
            {
                if(k>=lara[l] && k<=hara[l])
                {
                    p++;
                    if(p>1)
                        break;
                    strcpy(fstr,str[l]);
                }
            }
            if(p==1)
                printf("%s\n",fstr);
            else
                printf("UNDETERMINED\n");
        }
    }
}
