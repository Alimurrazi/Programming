#include<stdio.h>
#include<string.h>
int main()
{
 int ara[1000];
 char str[100];
 int i,j,k,l,t,n,pos,noi;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d%*c",&noi);
  pos=0;
  for(i=1;i<=noi;i++)
  {
  gets(str);
  l=strlen(str);
  if(strcmp(str,"RIGHT")==0)
  {
     pos+=1;
     ara[i]=1;
  }
  if(strcmp(str,"LEFT")==0)
  {
    pos-=1;
    ara[i]=-1;
  }
  j=8,n=0;
  if(l>5)
  {
   while(str[j])
   {
     n=n*10+(str[j]-'0');
     j++;
   }
   pos+=ara[n];
   ara[i]=ara[n];
  }
  }
  printf("%d\n",pos);
 }
 return 0;
}

