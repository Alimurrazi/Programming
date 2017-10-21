#include<stdio.h>
#include<string.h>
int main()
{
 char str[10000],str1[3]={"0"};
 int i,j,k,length,p;
 while(1)
 {
  scanf("%s",str);
  p=0;
 if(strcmp(str,str1)==0)
    return 0;
 length=strlen(str);
 for(i=0;i<length;i++)
 {
  p=p*10+str[i]-'0';
  p=p%11;
  printf("%d ",p);
 }
 if(p==0)
 {
  printf("%s is a multiple of 11.\n",str);
 }
 else
    printf("%s is not a multiple of 11.\n",str);
 }
 return 0;
}
