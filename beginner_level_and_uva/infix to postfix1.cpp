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
    int i,j,l,m,n,man1,man2;
    stack<char>s;
    char k;
    scanf("%s",str);
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
}
