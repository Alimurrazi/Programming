#include<stdio.h>
#include<string.h>
int main()
{
 char str[5000],str1[5]={"0"};
 int i,j,k,n,m,length,p;
 while(scanf("%s",str)!=EOF)
 {
  if(strcmp(str,str1)==0)
        return 0;
  length=strlen(str);
  p=0;
  for(i=0;i<length;i++)
  {
   p=p*10+str[i]-'0';
   p=p%17;
  }
  if(p==0)
    printf("1\n");
  else
    printf("0\n");
 }
 return 0;
}
