#include<stdio.h>
#include<string.h>
int main()
{
 char str[10],str1[10]={"one"},str2[10]={"two"},str3[10]={"three"};
 int length,i,j,k,count,t;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%s",str);
 count=0,i=0;
 while(str[i]!='\0')
 {
  if(str[i]!=str1[i])
        count++;
  i++;
 }
 if(count==1 || count==0)
 {
    printf("1\n");
     continue;
 }
 count=0,i=0;
 while(str[i]!='\0')
 {
  if(str[i]!=str2[i])
        count++;
  i++;
 }
 if(count==1 || count==0)
 {
    printf("2\n");
     continue;
 }
  count=0,i=0;
 while(str[i]!='\0')
 {
  if(str[i]!=str3[i])
        count++;
  i++;
 }
 if(count==1 || count==0)
 {
    printf("3\n");
     continue;
 }
 }
 return 0;
}
