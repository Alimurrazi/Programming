#include<stdio.h>
#include<stdlib.h>
#include<map>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
  char str[100];
  int i,j,k,l,m,n,t;
  scanf("%d",&t);
  int ans=0;
  j=1;
  while(t--)
  {
scanf("%s",str);
if(str[0]=='A'||str[0]=='P'||str[0]=='O'||str[0]=='R')
i=1;
if(str[0]=='B'||str[0]=='M'||str[0]=='S')
i=2;
if(str[0]=='D'||str[0]=='G'||str[0]=='J'||str[0]=='K'||str[0]=='T'||str[0]=='W')
i=3;
 k=fabs(j-i);
 ans=ans+k;
 j=i;
  }
  printf("%d\n",ans);
}
