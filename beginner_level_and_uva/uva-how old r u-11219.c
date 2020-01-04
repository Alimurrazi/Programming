#include<stdio.h>
#include<string.h>
int main()
{
 char str[50],str1[50];
 int ara[30],ara1[30];
 int i,j,t,k,n,m,l,length=10;
 scanf("%d",&t);
 for(m=1;m<=t;m++)
 {
  scanf("%s%s",str,str1);
  i=0,j=0;
  while(str[i])
  {
    ara[j]=0;
    while(str[i] && str[i]!='/')
    {
    ara[j]=ara[j]*10+(str[i]-48);
    i++;
    }
    if(str[i]=='/')
    {
      i++;
      j++;
    }
  }
 // printf("%d %d %d\n",ara[0],ara[1],ara[2]);
 i=0,j=0;
 while(str1[i])
  {
    ara1[j]=0;
    while(str1[i] && str1[i]!='/')
    {
    ara1[j]=ara1[j]*10+(str1[i]-48);
    i++;
    }
    if(str1[i]=='/')
    {
      i++;
      j++;
    }
  }
//  printf("%d %d %d",ara1[0],ara1[1],ara1[2]);
  k=0,l=0,n=0;
  if(ara[0]<ara1[0])
    k=1;
  if(ara[1]<(ara1[1]+k))
     l=1;
  if(ara[2]<(ara1[2]+l))
  {
    printf("Case #%d: Invalid birth date\n",m);
    continue;
  }
  n=(ara[2]-(ara1[2]+l));
  if(n>130)
  {
   printf("Case #%d: Check birth date\n",m);
   continue;
  }
  printf("Case #%d: %d\n",m,n);
 }
 return 0;
}
