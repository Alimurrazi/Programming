#include<stdio.h>
#include<string.h>
int main()
{
 char str[10000];
 int i,j,k,l,count,length;
 while(gets(str))
 {
  length=strlen(str);
  count=0;
  for(i=0;i<length;i++)
  {
   if(str[i]>=65  str[i]<=90)
   {
    str[i]=str[i]-65+97;
   }
  }
 //for(i=0;i<length;i++)
 //{
  //if((str[i]>=97)&&(str[i]<=122))
 // {
  // count++;
  // printf("%d ",count);
 // }
 //}
 }
 return 0;
}
