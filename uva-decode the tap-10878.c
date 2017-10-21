#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
 char str[1000];
 char str1[100];
 char str2[10000];
 int i,j,k=0,l=0,m,n,d,p=0;
 memset(str,'0',sizeof(str));
 while(gets(str))
 {
  j=0,d=0,i=0,l=0;
  if(p==1)
  {
  if(str[0]=='_')
   {
  str2[k]='\0';
  printf("%s",str2);
   }
  }
  while(str[i])
  {
    if(str[i]=='_')
      {
          l=1;
        break;
      }
    if(str[i]=='|'||str[i]=='.')
    {
      i++;
      continue;
    }
    if(str[i]==' ')
    {
      str1[j]='0';
      j++;
    }
    if(str[i]=='o')
    {
     str1[j]='1';
     j++;
    }
    i++;
  }
  if(l==0)
  {
  str1[j]='\0';
  j=0,d=0,p=1;
  while(str1[j])
  {
    d=d+(str1[j]-'0')*pow(2,(8-1-j));
    j++;
  }
  str2[k]=d;
  k++;
  }
 }

}
