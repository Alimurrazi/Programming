#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<algorithm>
#define MAX 30+5
using namespace std;


bool taken[MAX] ;
vector<char>res ;
string s ;
int r ,len;
void call (int start)
{
    if((int)res.size()==r )
    {
        int j ;
        for(j=0; j<r; j++)  cout<<res[j] ;
        cout<<endl ;
        return ;
    }

    for(int i=start; i<len; i++)
    {
        if(taken[i]==false)
        {
            taken[i] = true ;
            res.push_back(s[i]) ;
            call(i+1) ;
            taken[i] = false ;
            res.pop_back() ;
        }
        while(s[i]==s[i+1])
            i++;
    }
}


int main()
{
    while(cin>>s>>r)
    {
        memset(taken,false,sizeof(taken)) ;
        len = s.length() ;
        sort(s.begin(),s.end()) ;
        call(0) ;
    }
    return 0;
}
