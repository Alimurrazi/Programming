#include<stdio.h>
#include<math.h>
#include<string.h>

int binar(char str[100])
{
    int i,j,l,m,n;
    double k=0,p;
    i=0;
    l=strlen(str);
    l=l-1;
    while(str[i])
    {
        p=str[i]-'0';
        k=k+p*pow(2.0,l);
        l=l-1;
        i++;
    }
    l=k;
    return l;
}

int main()
{
    int ara[10];
    char str[200];
    char as[12];
    int i,j,k,l,m,n,t,a,b,c,d;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d.%d.%d.%d",&ara[0],&ara[1],&ara[2],&ara[3]);
        scanf("%s",str);
        c=0,n=0;
        l=strlen(str);
        for(j=0; j<=l; j++)
        {
            if(str[j]=='.' || j==l)
            {
                as[c]='\0';
                k=binar(as);
                if(k!=ara[n])
                    break;
                n++;
                c=0;
                continue;
            }
            as[c]=str[j];
            c++;
        }
        l=l+1;
        if(j==l)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
}
