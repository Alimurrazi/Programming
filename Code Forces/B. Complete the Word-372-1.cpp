#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[60000];
    int ara[60000];
    int i,j,k,l,m,n,t;
    while(scanf("%s",str)==1)
    {
        map<char,int>q;
        l=strlen(str);
        for(i=0; i<l; )
        {
       //     printf("%d\n",i);
            for(j=i; j<(i+26); j++)
            {
                if(j>=l)
                    break;
                if(str[j]>='A' && str[j]<='Z')
                {
                    if(q[str[j]]==0)
                        q[str[j]]=j;
                    else
                    {
                        i=q[str[j]]+1;
                        q[str[j]]=j;
                        break;
                    }
                }
            }

            if(j==(i+25))
            {
                printf("%s",str);
                break;
            }
        }
    }
}
