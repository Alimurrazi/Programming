#include<stdio.h>
#include<string.h>
int main()
{
 char str[700];
 int i,j,k,l,m,n,t,length,cm,ca,cr,cg,ci,ct,tp;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%s",str);
  length=strlen(str);
  cm=0,ca=0,cr=0,cg=0,ci=0,ct=0,tp=0;
  for(i=0;i<length;i++)
  {
   if(str[i]=='M')
        cm++;
 else if(str[i]=='A')
        ca++;
 else if(str[i]=='R')
        cr++;
   else if(str[i]=='G')
        cg++;
  else if(str[i]=='I')
        ci++;
  else if(str[i]=='T')
        ct++;
  }
  while(1)
  {
   if(cm<=0 || ca<3 || cr<2 || cg<=0 || ci<=0 || ct<=0)
        break;
    tp++;
   cm=cm-1;
   ca=ca-3;
   cr=cr-2;
   cg=cg-1;
   ci=ci-1;
   ct=ct-1;
  }
  printf("%d\n",tp);
 }
 return 0;
}
