#include<stdio.h>
#include<string.h>
int main()
{
 long n,i,m,j,k,l,p,q,r,count=0;
 char ara[1100],sumstr[1100];
 long length,length1,temp;
 while(scanf("%d",&n)==1)
 {
   char str[1100]={"0"},str1[1100]={"1"};
 for(l=0;l<n;l++)
 {
  length=strlen(str);
  length1=strlen(str1);
  i=0,temp=0,k=0;
  while(i!=length)
  {
   k=str[length-1-i]-48+str1[length1-1-i]-48+temp;
   ara[i]=0;
   ara[i]=k%10+48;
   temp=k/10;
   i++;
  }
  if(length!=length1)
  {
    while(i!=length1)
    {
      k=str1[length1-1-i]-48+temp;
      ara[i]=k%10+48;
      temp=k/10;
      i++;
    }
  }
  if(temp>0)
  {
    ara[i]=temp+48;
   m=i;
  }
  else
    m=i-1;
  for(i=m,j=0;i>=0;i--,j++)
  {
    sumstr[j]=ara[i];
  }
  sumstr[j]='\0';
  strcpy(str,str1);
  strcpy(str1,sumstr);
 }
 printf("The Fibonacci number for %ld is %s\n",n,str);
 printf("count==%d",strlen(str));
 }
 return 0;
}
