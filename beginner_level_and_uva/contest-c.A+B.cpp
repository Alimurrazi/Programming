#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
 //char str[1005],str1[1005];
 string str,str1,str2;
 int i,j,k,l,t;
 while(scanf("%d",&t)==1)
 {
   for(i=1;i<=t;i++)
   {
     cin>>str;
     cin>>str1;
     str2=str+str1;
    printf("Case %d: ",i);
    cout<<str2<<endl;
   }
 }
}
