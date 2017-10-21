#include<stdio.h>
#include<algorithm>
#define max(a,b) (a>b)?a:b
using namespace std;
int ara[110],i,j,a,b,c,d,k;
int gcd(int a,int b)
{
  if(a==0)
       return b;
  else
    return gcd(b%a,a);
}
int main()
{
 char str[110];
 int t,m;
 scanf("%d%*c",&t);
 while(t--)
 {
   gets(str);
   i=0,j=0;
   while(str[i])
   {
    ara[j]=0;
    while(str[i]&&str[i]!=' ')
    {
  ara[j]=ara[j]*10+str[i]-'0';
  i++;
    }
  while(str[i]==' ')
    i++;
  j++;
   }
  m=1;
  for(i=0;i<j;i++)
    for(k=i+1;k<j;k++)
   m=max(m,gcd(ara[i],ara[k]));
  printf("%d\n",m);
 }
 return 0;
}
