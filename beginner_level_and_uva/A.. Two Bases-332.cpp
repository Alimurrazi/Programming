#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
    double i,j,k,l,m,n,t,b,f,s;
    while(cin>>l>>b)
    {
     f=0,s=0;
     for(i=l-1;i>=0;i--)
     {
      cin>>n;
      f=f+n*pow(b,i);
     }
     cin>>l>>b;
     for(i=l-1;i>=0;i--)
     {
      cin>>n;
      s=s+n*pow(b,i);
     }
     if(f==s)
     printf("=\n");
     else if(f<s)
     printf("<\n");
     else
     printf(">\n");
    }
}
