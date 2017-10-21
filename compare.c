#include<stdio.h>
int main()
{
 char str[10]={"two"},str1[10]={"twe"};
 int i=0,j,l,k=0;
 while(str[i]!='\0'||str1[i]!='\0')
 {
  if(str[i]!=str1[i]){
  k=1;
  }
  i++;
 }
 if(k==0)
    printf("yes");
 else
    printf("no");
 return 0;
}
