#include<stdio.h>
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    map<string,int>check;
    string s;
    string w2="tu";
    string w3="tui";
    int i,j,k,l,m,n,o,p;
    vector<string>q;
    while(cin>>s)
    {
        l=s.length();
        i=5;
        p=0;
        //  while(1)
        {
            if(i>=l)
            {
                break;
            }
            for(i=5; i<l; i++)
            {
                w2[0]=s[i];
                w3[0]=s[i];
                for(j=i+1; j<l; j++)
                {
                    w2[1]=s[j];
                    if(check[w2]==0)
                    {
                        check[w2]=1;
                        q.push_back(w2);
                    }
                    if((i+2)>=l)
                        break;
                    w3[1]=s[j];
                    w3[2]=s[j+1];
                    if(check[w3]==0)
                    {
                        check[w3]=1;
                        q.push_back(w3);
                    }
                    break;
                }
            }
        }
        sort(q.begin(),q.end());
        printf("%d\n",q.length());
        if(q.length()>0)
        {
            for(i=0; i<q.length(); i++)
            {
                cout<<q[i]<<endl;
            }
        }
    }
}
