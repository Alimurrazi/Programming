#include<stdio.h>
#include<string.h>
int main()
{
  char ara[2000];
  ara[0]=0;
  char str[2000],str1[2000];
  int length,length1,i,j,k=0,l,temp,m,p,n;
  while(1)
  {
   scanf("%s%s",str,str1);
  length=strlen(str);
  length1=strlen(str1);
  i=0,temp=0,k=0;
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
  for(j=p,i=0;j>=0;j--,i++)
  str[i]=ara[j];
  str[i]='\0';
  for(i=0;i<=p;i++)
  printf("%d",str[i]);
  printf("\n");
}
}

