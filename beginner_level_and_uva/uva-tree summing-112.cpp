//(5(4(11(7()())(2()()))()) (8(13()())(4()(1()()))))
#include<stdio.h>
#include<string.h>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    char str[10000];
    char str1[10000];
    vector<char>edge;
    int i,j=0,k,l,m,n,fb=0,sb=0,man,p;
    while(gets(str))
    {
        i=0,n=0;
        if(str[0]>='0' && str[0]<='9')
        {
            j=0;
            while(str[i]!=' ')
            {
                n=n*10+str[i]-'0';
                i++;
            }
            while(str[i])
            {
                if(str[i]==' '||str[i]=='\0')
                {
                    i++;
                    continue;
                }
                if(str[i]=='(')
                    fb++;
                if(str[i]==')')
                    sb++;
                str1[j++]=str[i++];
            }
        }
        else
        {
            i=0;
            while(str[i])
            {

                if(str[i]==' '||str[i]=='\0')
                {
                    i++;
                    continue;
                }
                if(str[i]=='(')
                    fb++;
                if(str[i]==')')
                    sb++;
                str1[j++]=str[i++];
            }
        }
        if(fb!=sb)
            continue;
        str1[j]='\0';
        fb=sb=i=j=man=p=0;
        printf("%s\n",str1);
        i=0,k=0;
        l=strlen(str1);
        for(i=0; i<l; i++)
        {
            if(str1[i]==')')
            {
             str1[i]='a';
            if(str1[i-1]=='(')
            {
            str1[i-1]='a';
            continue;
            }
                k=i;
                for(k=i; k>=0; k--)
                {
                   // printf("%c ",str1[k]);
                    if(str1[k]>='0' && str1[k]<='9')
                    {
                        //printf("%c ",str1[k]);
                        man=man+(str1[k]-'0');
                    }
                    if(p==0)
                        str1[k]='a';
                    if(str1[k]=='(')
                        p=1;
                }
                p=0;
            }
            printf("%d\n",man);
            man=0;
        }

    }
}
