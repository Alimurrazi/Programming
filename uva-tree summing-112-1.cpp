//10 (3(2(4()())(8()()))(1(6()())(4()())))
//77 (77  (1 () ())  (0 () ()) )
#include<stdio.h>
#include<string.h>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    char str[10000];
    char str1[10000];
    char str2[10000];
    int i,j=0,k,l,m,n,fb=0,sb=0,man,p,a,b,minas,c;
    while(gets(str))
    {
        i=0,n=0;
        if(str[0]>='0' && str[0]<='9')
        {
            j=0;
            while(str[i])
            {
                if(str[i]==' ' || str[i]=='\0')
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
                if(str[i]==' ' || str[i]=='\0')
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
        if(fb==0 && sb==0)
            continue;
        str1[j]='\0';
        if(str1[0]=='\0')
        continue;
        n=0,i=0,k=0,minas=1;
        while(str1[i]!='(')
        {
            if(str1[i]=='-')
            {
                minas=-1;
                i++;
                continue;
            }
            n=n*10+(str1[i]-'0');
            i++;
        }
        n=n*minas;
        l=strlen(str1);
        for(j=i; j<l; j++)
        {
            str2[k++]=str1[j];
        }
        str2[k]='\0';
        fb=sb=i=j=man=p=0;
        i=0,k=0;
        l=strlen(str2);
        if(l==2)
        {
            printf("no\n");
            j=0;
            continue;
        }
        for(i=0; i<l; i++)
        {
            if(i==(l-1))
            {
                if(str2[i-5]>='0' && str2[i-5]<='9')
                    ;
                else
                    continue;
            }
            p=0;
            minas=1;
            c=0;
            if(str2[i]==')')
            {
                c=1;
                if(str2[i-1]=='(')
                {
                    str2[i]='a';
                    str2[i-1]='a';
                    continue;
                }
                if(str2[i-5]>='0' && str2[i-5]<='9')
                {
                    k=i;
                    m=0,p=0;
                    for(k=i; k>=0; k--)
                    {
                        if(str2[k]>='0' && str2[k]<='9')
                        {
                            a=k;
                            while(str2[k]!='(')
                            {
                                k--;
                            }
                            for(j=k+1; j<=a; j++)
                            {
                                if(str2[j]=='-')
                                {
                                    minas=-1;
                                    continue;
                                }
                                m=m*10+(str2[j]-'0');
                            }
                            man=man+(m*minas);
            //                printf("1st man=%d m=%d\n",man,m);
                            m=0;
                            minas=1;
                           // break;
                        }
                    }
                }
                b=i;
                while(str2[b]!='(')
                {
                    str2[b]='a';
                    b--;
                }
                if(str2[b]=='(')
                    str2[b]='a';
            }
          //  printf("2nd man=%d\n",man);
            if(man==n && c==1)
            {
                printf("yes\n");
                break;
            }
            man=0;
        }
        if(i==l)
            printf("no\n");
        j=0;
    }
}
