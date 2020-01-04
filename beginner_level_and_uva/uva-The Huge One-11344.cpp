#include<stdio.h>
#include<string.h>

char str[1100];
int key;

void divide(int m)
{
    int i,j,k,l;
    l=strlen(str);
    k=0;
    for(i=0; i<l; i++)
    {
        k=k*10+str[i]-'0';
        k=k%m;
    }
    if(k==0)
        key=0;
    else
        key=1;
}

int main()
{

    int i,j,k,l,m,n,p,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        scanf("%d",&n);
        key=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&m);
            if(key==1)
                continue;
            divide(m);
        }
        if(key==0)
            printf("%s - Wonderful.\n",str);
        else
            printf("%s - Simple.\n",str);
    }
}
