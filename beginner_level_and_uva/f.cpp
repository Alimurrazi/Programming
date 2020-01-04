#include<stdio.h>
#include<string.h>
int main()
{
    char str[100005];
    int i,j,k,l,m,n,t,nl,p;
    while(scanf("%s",str)==1)
    {
        l=strlen(str);
        i=0,j=l-1,nl=l,p=0,m=0;
        while(1)
        {
            if(i>=(nl/2))
                break;
            if(str[j]==str[i])
            {
                if(p==1)
                {
                    nl=nl+i;
                    p=0;
                }
                i++;
                j--;
            }
            else
            {
                p=1;
                i++;
                m=i;
            }
        }
        printf("%s",str);
        for(i=m-1; i>=0; i--)
            printf("%c",str[i]);
        printf("\n");
    }
}
