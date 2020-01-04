#include<stdio.h>
#include<string.h>
int main()
{
 int ara[26];
 char ch;
 char str[30];
 int i,j,k,l,r=4,c=3,m=2,n=1,max=0,all,t;
 scanf("%d",&t);
 for(l=1;l<=t;l++)
 {
 scanf("%d%d%d%d",&r,&c,&m,&n);
 memset(ara,0,sizeof(ara));
 for(i=0;i<r;i++)
 {
  scanf("%s",str);
  for(j=0;j<c;j++)
  {
   k=str[j]-'A';
   ara[k]=ara[k]+1;
  }
 }
  max=0,all=0;
  for(i=0;i<26;i++)
   {
     if(ara[i]>max)
      max=ara[i];
   }
  for(i=0;i<26;i++)
  {
    if(ara[i]==max)
     all=all+(ara[i]*m);
   else if(ara[i]>0)
     all=all+(ara[i]*n);
   else
      continue;
  }
   printf("Case %d: %d\n",l,all);
 }
}
