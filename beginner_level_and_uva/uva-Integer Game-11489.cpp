#include<stdio.h>
#include<iostream>
#include<vector>
#include<string.h>
#include<map>
using namespace std;
map < string , int > q;
string temp;
//char temp[1005];

//int funct(char str[1005])
int funct(string str)
{
    cout<<"str=="<<str<<endl;
//    string temp;
    int i,j,k,l,p,m;
    i=0;
  //  l=strlen(str);
    l=str.length();
    k=0;
    for(i=0; i<l; i++)
    {
        k=k+(str[i]-'0');
    }
    for(i=0; i<l; i++)
    {
        k=k-(str[i]-'0');
        if(k%3==0)
            break;
        k=k+(str[i]-'0');
    }
    if(i==l)
        return 0;
    cout<<"s=="<<str[1]<<endl;
    for(m=0; m<l; m++)
    {
        j=0;
        for(i=0; i<l; i++)
        {
            if(i==m)
                continue;
           // printf("i==%d j==%d\n",i,j);
            cout<<"str========="<<str[i]<<endl;
           // printf("str==%c\n",str[i]);
            temp[j]=str[i];
            cout<<"temp========"<<temp[j]<<endl;
            j=j+1;
        }
        temp[j]='\0';
        cout<<"temp=="<<temp<<endl;
        if(funct(temp)==0)
            return 1;
    }
    return 0;
}

int main()
{
    string str;
  //  char str[1005];
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        cin>>str;
       // scanf("%s",str);
        k=funct(str);
        if(k==1)
            printf("Case %d: S\n",i);
        else
            printf("Case %d: T\n",i);
    }
}

