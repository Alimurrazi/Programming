#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;

int main()
{
    stack<char>q;
    char str[200];
    int i,j,k,l,t,ans;
    char f;
    scanf("%d%*c",&t);
    for(k=1; k<=t; k++)
    {
        gets(str);
        // l=strlen(str);
        /*
        j=0;
        for(i=0; i<l; i++)
        {
            if(str[i]==' ')
                continue;
            str1[j++]=str[i];
        }
        str1[j]='\0';
        if(str1[0]=='\0')
            continue;
        k++;
        //    printf("%s\n",str1);
        l=strlen(str1);
        */
        ans=0,i=0;

        //  for(i=0; i<l; i++)
        while(str[i])
        {
            if(str[i]==')')
            {
                if(!q.empty())
                {
                    f=q.top();
                    q.pop();
                    if(f!='(')
                    {
                        ans=1;
                        break;
                    }
                }
                else
                {
                    ans=1;
                    break;
                }
            }

            else if(str[i]==']')
            {
                if(!q.empty())
                {
                    f=q.top();
                    q.pop();
                    if(f!='[')
                    {
                        ans=1;
                        break;
                    }
                }
                else
                {
                    ans=1;
                    break;
                }
            }
            else if(str[i]==' ')
            {
                i++;
                continue;
            }
            else
            {
                q.push(str[i]);
            }
            i++;
        }
        if(!q.empty())
        {
            while(!q.empty())
            {
                q.pop();
            }
            if(q.empty())
                ans=1;
        }
        if(ans==1)
            printf("No\n");
        else
            printf("Yes\n");
    }
}
