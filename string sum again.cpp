#include<stdio.h>
#include<string.h>
int main()
{
  char ara[2000];
  ara[0]=0;
  char str[2000]={"0"},str1[2000],stro[3]={"0"},osta[2000];
  int length,length1,i,j,k=0,l,temp,m,p,n,ml;
  while(scanf("%s",str1)==1)
  {
   if(strcmp(str1,stro)==0)
    break;
  length=strlen(str);
  length1=strlen(str1);
  if(length<length1)
  {
   strcpy(osta,str);
   strcpy(str,str1);
   strcpy(str1,osta);
  }
  length=strlen(str);
  length1=strlen(str1);
  i=0,temp=0,k=0,p=0;
  while(i!=length1)
  {
  k=(str[length-1-i]-48)+(str1[length1-1-i]-48)+temp;
  ara[i]=0;
  ara[i]=(k%10);
  temp=k/10;
  i++;
  }
  if(length!=length1)
  {
  while(i!=length)
  {
   k=(str[length-1-i]-48)+temp;
   ara[i]=(k%10);
   temp=k/10;
   i++;
  }
  }
  if(temp>0)
  {
    ara[i]=temp;
  p=i;
  }
  else
    p=i-1;
    ara[i+1]='\0';
  for(j=p,i=0;j>=0;j--,i++)
  str[i]=ara[j]+48;
  str[i]='\0';
}
  printf("%s\n",str);
   return 0;
  }
