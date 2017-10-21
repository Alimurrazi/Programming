#include<stdio.h>
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int funct(char str[1005])
{
    printf("str==%s\n",str);
    char temp[1005]="";
    int i,j,k,l,p,m;
    i=0;
    l=strlen(str);
    k=0;
    for(i=0; i<l; i++)
    {
        k=k+(str[i]-'0');
    }
    for(i=0; i<l; i++)
    {
        k=k-(str[i]-'0');
        if(k%3==0)
            break;
        k=k+(str[i]-'0');
    }
    if(i==l)
        return 0;
    for(m=0; m<l; m++)
    {
        j=0;
        for(i=0; i<l; i++)
        {
            if(i==m)
                continue;
            temp[j++]=str[i];
        }
        temp[j]='\0';
      //  cout<<"temp=="<<temp<<endl;
        if(funct(temp)==0)
            return 1;
    }
    return 0;
}

int main()
{
    char str[1005];
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",str);
        k=funct(str);
        if(k==1)
            printf("Case %d: S\n",i);
        else
            printf("Case %d: T\n",i);
    }
}
