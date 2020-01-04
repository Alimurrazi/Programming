#include<stdio.h>
#include<string.h>
int main()
{
 char str[50000];
 int i,j,length,count;
 while(gets(str)){
 length=strlen(str);
 count=1;
  for(i=0;i<length;i++)
  {
   if((str[i+1]==' '||str[i+1]=='!'||str[i+1]=='"'||str[i+1]=='#'||str[i+1]=='$'||str[i+1]=='%'||str[i+1]=='&'||str[i+1]=='`'||str[i+1]=='('||str[i+1]==')'||str[i+1]=='*'||str[i+1]==' 1'||str[i+1]=='''||str[i+1]=='-'||str[i+1]=='.'||str[i+1]=='/'||str[i+1]=='0'||str[i+1]=='2'||str[i+1]=='3'||str[i+1]=='4'||str[i+1]=='5'||str[i+1]=='6'||str[i+1]=='7'||str[i+1]=='8'||str[i+1]=='9'||str[i+1]==':'||str[i+1]==';'||str[i+1]=='<'||str[i+1]=='>'||str[i+1]=='?'||str[i+1]=='@'||str[i+1]=='['||str[i+1]==']'||str[i+1]=='^'||str[i+1]=='-'||str[i+1]=='+'||str[i+1]=='%'||str[i+1]=='='||)&&((str[i]>=97 && str[i]<=122)||(str[i]>=65&&str[i]<=90)))
  //{
   // if(str[i+1]==33)
    //{
  //}
  //&&((str[i+1]=33)))//0 ||str[i+1]<=64)))//||(str[i+1]>=91||str[i+1]<=96) ||(str[i+1]>=123||str[i+1]<=127)))
     // continue;

        count++;
  }}
  printf("%d\n",count);}
  return 0;
}}
