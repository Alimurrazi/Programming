#include<stdio.h>
#include<string.h>

int main()
{
    char str[1005];
    int valu[150][150];
    int i,j,k,l,m,n,x,y;
    while(scanf("%d",&n)==1)
    {
        memset(valu,0,sizeof(valu));
        for(i=0; i<n; i++)
        {
            scanf("%s",str);
            char c1=str[0],c2=str[0];
            l=strlen(str);
            for(j=1; j<l; j++)
            {
                if(str[j]!=c2 && c1==c2)
                    c2=str[j];
                if(str[j]!=c2 && str[j]!=c1 && c1!=c2)
                    break;
            }
            if(j==l)
            {
                x=c1;
                y=c2;
                if(x==y)
                    valu[x][y]=valu[x][y]+l;
                else
                {
                    valu[x][y]=valu[x][y]+l;
                    valu[y][x]=valu[y][x]+l;
                }
            }
        }
        m=0;
        for(i='a'; i<='z'; i++)
        {
            for(j='a'; j<='z'; j++)
            {
                if(i==j)
                    k=valu[i][j];
                else
                    k=valu[i][j]+valu[i][i]+valu[j][j];
                if(k>m)
                    m=k;
            }
        }
        printf("%d\n",m);
    }
}
