#include<stdio.h>
int sod(int n)
{
 int sum=0,t;
 while(n>0)
 {
   t=n%10;
   sum=sum+t;
   n=n/10;
 }
 return sum;
}
int fun(int a,int b)
{
  int ans=0;
  int i,j,cnt;
  for(i=a;i<=b;i++)
  {
    cnt=0;
    for(j=1;j<=i;j++)
    {
      if(j+sod(j)==i)
            cnt++;
    }
    if(cnt==0)
        ans++;
  }
  return ans;
}
int fun(int a)
{
  int i;
  for(i=1;i<=a;i++)
  {
    if(i+sod(i)==a)
    {
     return i;
    }
  }
  return -1;
}
int main()
{
  int n,sc,i,j,t,k;
  char str[80];
  int ara[10];
  scanf("%d%*c",&t);
  for(k=1;k<=t;k++)
  {
 {
  gets(str);
  i=0,j=0,sc=0;
  while(str[i])
  {
   ara[j]=0;
   while(str[i]&&str[i]!=' ')
    ara[j]=ara[j]*10+str[i++]-'0';
    if(str[i]==' ')
    {
        i++;
        j++;
        sc++;
    }
  }
  if(sc==0)
  {
  printf("Case %d: %d\n",k,fun(ara[0]));
  continue;
  }
  else
    printf("Case %d: %d\n",k,fun(ara[0],ara[1]));
 }
 }
  return 0;
}
