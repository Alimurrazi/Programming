#include<stdio.h>
#include<string.h>

int main()
{
    char str[110];
    int i,j,k,l,m,ans;
    int s,c,n;
    while(scanf("%s",str)==1)
    {
        i=0,ans=0;
        l=strlen(str);
        while(str[i])
        {
            s=0,c=0,n=0;
            for(j=i; ; j++)
            {
                if(j>=l)
                break;
                if(str[j]>='a' && str[j]<='z')
                    s=1;
                if(str[j]>='A' && str[j]<='Z')
                    c=1;
                if(str[j]>='0' && str[j]<='9')
                    n=1;
                if(s==1 && c==1 && n==1)
                {
                    ans++;
                    // printf("j===%d\n",j);
                    break;
                }
            }
            i=j+1;
        }
        printf("%d\n",ans);
    }
}
