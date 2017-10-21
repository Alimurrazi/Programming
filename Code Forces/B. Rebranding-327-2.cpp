#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l,m,n;
    char str[200005];
    char nstr[10];
    int alstr[200];
    char a,b;
    for(i='a'; i<='z'; i++)
        alstr[i]=i;
    scanf("%d%d",&m,&n);
    scanf("%s%*c",str);
    for(i=0; i<n; i++)
    {
        gets(nstr);
        a=nstr[0];
        b=nstr[2];
        for(j='a'; j<='z'; j++)
        {
            if(alstr[j]==a)
            {
                alstr[j]=b;
            }
            else if(alstr[j]==b)
            {
                alstr[j]=a;
            }
        }
    }
    for(i=0; i<m; i++)
    {
        printf("%c",alstr[str[i]]);
    }
    printf("\n");
}
