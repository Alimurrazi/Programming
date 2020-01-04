#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
 char str[100],str1[100],str2[5]={"0"};
 int i,j,length,length1,count,p,sum=0,k,l;
 while(1)
 {
  scanf("%s%s",str,str1);
  if(strcmp(str,str2)==0&&strcmp(str1,str)==0)
    return 0;
  length=strlen(str);
  length1=strlen(str1);
  k=fabs(length-length1);
  if(length1>=length)
  l=length1;
  if(length>length1)
  l=length;
  sum=0,count=0,p=0;
  int c=0;
  k=l-k;
  for(i=l-1;i>=0;i--)
  {
   if(length>=length1)
   {
   if(c==k)
    p=(str[i]-'0')+0+p;
   else
   {
   p=((str[i]-'0')+(str1[i]-'0'))+p;
   }
   p=p/10;
   c++;
  printf("%d ",p);
   if(p>0)
   {
    count++;
   }
   }
  }
  if(count==0)
  {
   printf("No carry operation.\n");
    continue;
  }
 else if(count==1)
  {
   printf("1 carry operation.\n");
    continue;
  }
 else
  printf("%d carry operations.\n",count);
 }
 return 0;
}
