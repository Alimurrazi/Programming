#include<stdio.h>
#include<string.h>

int change(int k)
{
    if(k>='a' && k<='z')
        return k;
    else
    {
        k=(k-'A')+'a';
        return k;
    }
}

int main()
{
    char str1[105];
    char str2[105];
    int fara[200];
    int sara[200];
    int i,j,k,l,m,n,t;
    scanf("%d%*c",&t);
    for(j=1; j<=t; j++)
    {
        memset(fara,0,sizeof(fara));
        memset(sara,0,sizeof(sara));
        gets(str1);
        l=strlen(str1);
        for(i=0; i<l; i++)
        {
            if(str1[i]==' ')
                continue;
            k=str1[i];
            k=change(k);
            fara[k]++;
        }
        gets(str2);
        l=strlen(str2);
        for(i=0; i<l; i++)
        {
            if(str2[i]==' ')
                continue;
            k=str2[i];
            k=change(k);
            sara[k]++;
        }
        for(i='a'; i<='z'; i++)
        {
            if(fara[i]!=sara[i])
                break;
        }
        if(i>'z')
            printf("Case %d: Yes\n",j);
        else
            printf("Case %d: No\n",j);
    }
}
