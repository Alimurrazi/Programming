#include<stdio.h>
#include<string.h>
#include <iostream>
using namespace std;
int main()
{
 char str[10];
 int i,j,k,l,m,n,t;
 double sum;
 scanf("%d",&t);
 for(j=1;j<=t;j++)
 {
  scanf("%s",str);
  m=0,n=0,i=0;
  while(str[i]>='0'&&str[i]<='9')
  {
   m=m*10+(str[i]-'0');
   i++;
  }
  while(str[i])
  {
    if(str[i]>='0'&&str[i]<='9')
     n=str[i]-'0';
    i++;
  }
  sum=(m*0.5)+(n*0.05);
  printf("Case %d: ",j);
  cout<<sum<<endl;
 }
}
