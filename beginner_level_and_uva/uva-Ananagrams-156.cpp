#include<stdio.h>
#include<string.h>
#include<map>
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

map<string,int>word;
string sobdo,sobdo1,sobdo2,sobdo3;
map<int,string>serial;
priority_queue<char>q;
priority_queue<string>q1;
stack<string>line;

int main()
{
    int i,j,k,l,m,n;
    char v;

    while(1)
    {
        cin>>sobdo;
        if(sobdo=="#")
            break;
        i=0;
        q1.push(sobdo);

        while(sobdo[i])
        {
            if(sobdo[i]>='a' && sobdo[i]<='z')
                v=sobdo[i]-'a'+'A';
            else
                v=sobdo[i];
            q.push(v);
            i++;
        }

        i=0;
        while(!q.empty())
        {
            v=q.top();
            sobdo[i]=v;
            i++;
            q.pop();
        }
       // sobdo[i]='\0';
       // cout<<sobdo;
        if(word[sobdo]!=1 && word[sobdo]!=2)
        {
           // cout<<sobdo;
          //  printf(" %d\n",word[sobdo]);
            word[sobdo]=1;
        }
       else if(word[sobdo]==1)
        {
          //  cout<<sobdo;
            word[sobdo]=2;
          //  printf(" %d\n",word[sobdo]);
        }
    }
   // printf("MECA==%d\n",word["MECA"]);
    while(!q1.empty())
    {
        sobdo=q1.top();
        sobdo1=sobdo;
     //   cout<<"sobdo1 "<<sobdo1<<'\n';
        i=0;
        while(sobdo[i])
        {
            if(sobdo[i]>='a' && sobdo[i]<='z')
                v=sobdo[i]-'a'+'A';
            else
                v=sobdo[i];
            q.push(v);
            i++;
        }
          i=0;
        while(!q.empty())
        {
            v=q.top();
            sobdo[i]=v;
            i++;
            q.pop();
        }
     //   cout<<"after "<<sobdo<<'\n';
         if(word[sobdo]==1)
         line.push(sobdo1);
         //   cout<<sobdo1<<'\n';
        q1.pop();
    }
    while(!line.empty())
    {
      sobdo=line.top();
      cout<<sobdo<<'\n';
      line.pop();
    }

}
