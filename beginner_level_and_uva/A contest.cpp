#include<stdio.h>
#include<string.h>

char str1[100],str2[100];
char str3[100];

int check(int key)
{
    char c;
    if(key==1)
        c='1';
    else
        c='8';
    int i,j,k,l,m,n,l1,l2,l3,ans=0,b=0;
    l1=strlen(str1);
    l2=strlen(str2);
    for(i=0; i<l1; i++)
    {
        if(key==1)
            str3[i]='1';
        else
            str3[i]='8';
    }
    str3[i]='\0';
    l3=strlen(str3);
    for(i=0; i<l1; i++)
    {
        if(str3[i]>str1[i])
        {
            b=3;
            break ;
        }
        if(str1[i]>str3[i])
        {
            b=1;
            break;
        }
    }
    if(b==1)
    {
        str3[l3]=c;
        str3[l3+1]='\0';
    }
    l3=strlen(str3);
    while(1)
    {
        if(l3>l2)
        {
            return ans;
        }
        if(l3<l2)
        {
            str3[l3]=c;
            str3[l3+1]='\0';
            l3=strlen(str3);
            ans=ans+1;
        }
        k=0;
        for(i=0; i<l3; i++)
        {
            if(str3[i]>str2[i])
            {
                k=1;
                break;
            }
            if(str2[i]>str3[i])
                break;
        }
        if(k==0)
            ans=ans+1;
        return ans;
    }
}

int main()
{

    int i,j,k,l,m,n,o,p,l1,l2,ans,b;
    while(scanf("%s%s",str1,str2)==2)
    {
        l1=strlen(str1);
        ans=0,b=0;
        if(l1==1)
        {
            if(str1[0]=='0')
                ans=ans+1;
        }
        {
            ans=ans+check(1);
            ans=ans+check(8);
        }
        printf("%d\n",ans);
    }
}

