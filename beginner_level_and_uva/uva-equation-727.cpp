/*  A+(B*C-(D/E?F)*G)*H     */


#include<stdio.h>
#include<stack>
#include<string.h>
#include<iostream>
using namespace std;

int check(char c)
{

    if(c=='+'||c=='-')
        return 1;
    else if(c=='*'||c=='/')
        return 2;
    else
        return 3;
}

int main()
{
    char str[100];
    char str1[100];
    int i,j,l,m,n,man1,man2,t;
    stack<char>s;
    char k;
    scanf("%d",&t);
    getchar();
   // getchar();
    while(t--)
    {
        getchar();

        for(i=0;  ; i++)
        {
            gets(str1);
            if(str1[0]=='\0')
            {
                str[i]='\0';
                break;
            }
            str[i]=str1[0];
        }
        if(t!=0)
        printf("\n");
       // printf("%s\n",str);
        s.push('(');
        i=0;
        while(str[i])
        {
            if(isalpha(str[i]))
            {
                printf("%c",str[i]);
                i++;
                continue;
            }
            else
            {
                k='0';
                if(str[i]!='(' && str[i]!=')')
                {
                    k=s.top();
                    if(k=='(')
                    {
                        s.push(str[i]);
                        i++;
                        continue;
                    }
                    // man1=check(k);
                    man2=check(str[i]);
                    while(1)
                    {
                        man1=check(k);
                        if(man1==man2 || man1<man2 || k=='(')
                            break;
                        if(man1>man2)
                        {
                            printf("%c",k);
                            s.pop();
                        }
                        k=s.top();
                    }
                    s.push(str[i]);
                }
                if(str[i]=='(')
                    s.push(str[i]);
                k='0';
                if(str[i]==')')
                {
                    while(k!='(')
                    {
                        k=s.top();
                        if(k=='(')
                            s.pop();
                        else
                        {
                            printf("%c",k);
                            s.pop();
                        }
                    }
                }
            }
            i++;
        }
        k='0';
        {
            while(k!='(')
            {
                k=s.top();
                if(k=='(')
                {
                    printf("\n");
                    s.pop();
                }
                else
                {
                    printf("%c",k);
                    s.pop();
                }
            }
        }
        while(!s.empty())
        {
         s.pop();
        }
    }
}
