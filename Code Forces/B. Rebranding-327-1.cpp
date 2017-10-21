#include<stdio.h>
#include<map>
#include<iostream>
using namespace std;

int main()
{
    map < char , char > ara;
    char str[200005];
    int i,j,k,l,m,n;
    char c,x,y;
    while(scanf("%d%d",&l,&n)==2)
    {
        scanf("%s%*c",str);
        for(i='a'; i<='z'; i++)
        {
            c=i;
            ara[c]=c;
        }
        for(i=0; i<n; i++)
        {
            scanf("%c%c%c%*c",&x,&c,&y);
            printf("%c %c\n",x,y);
            ara[x]=y;
            ara[y]=x;
        }
        for(i=0; i<l; i++)
        {
            c=str[i];
            printf("%c",ara[c]);
        }
        printf("\n");
    }
}
