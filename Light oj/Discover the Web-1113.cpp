#include<stdio.h>
#include<map>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    string s,s1,sf,ss;
    map < int, string > q;
    int i,j,k,l,m,n,t,current,high;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        printf("Case %d:\n",i);
        q[1]="http://www.lightoj.com/";
        current=1;
        high=current;
        while(1)
        {
            cin>>s;
            if(s=="QUIT")
                break;
            if(s=="VISIT")
            {
                cin>>s1;
                q[current+1]=s1;
                current=current+1;
                if(current>high)
                    high=current;
                for(j=current+1; j<=high; j++)
                    q[j]="\0";
                /*
                for(j=high+1; j>=current+2 ; j--)
                {
                    q[j]=q[j-1];
                }
                q[current]=s1;
                current=current;
                if(current>high)
                    high=current;
                */
                cout<<s1<<endl;
            }
            if(s=="BACK")
            {
                if(q[current-1]=="\0")
                    cout<<"Ignored"<<endl;
                else
                {
                    current=current-1;
                    cout<<q[current]<<endl;
                }
            }
            if(s=="FORWARD")
            {
                if(q[current+1]=="\0")
                    cout<<"Ignored"<<endl;
                else
                {
                    current=current+1;
                    cout<<q[current]<<endl;
                }
            }
        }
        q.clear();
    }
}
