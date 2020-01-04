/*
   7
([] )
(([()])))
([()[]()])()
(
(]
)(
][
Output[edit]
Yes
No
Yes
No
No
No
No
*/
#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;

int main()
{
    char str[140];
    stack<char>q;
    int i,j,k,l,t;
    char c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        i=0;
        while(str[i])
        {
            k=0;

            if(str[i]==')')
            {
                if(q.empty())
                {
                    k=1;
                    break;
                }
                c=q.top();
                q.pop();
                if(c!='(')
                {
                    k=1;
                    break;
                }
            }

            if(str[i]==']')
            {
                if(q.empty())
                {
                    k=1;
                    break;
                }
                c=q.top();
                q.pop();
                if(c!='[')
                {
                    k=1;
                    break;
                }
            }
            if(str[i]=='(' && str[i]=='[')
                q.push(str[i]);
            i++;
        }
        if(q.empty()==false)
        k=1;
        while(!q.empty())
            q.pop();
        if(k==1)
            printf("No\n");
        else
            printf("Yes\n");
    }
}
