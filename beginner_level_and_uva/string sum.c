#include<stdio.h>
int main()
{
  char str[100]={"123"},str1[100]={"125"},str3[200];
  int i,sum=0,j=0;
  for(i=2;i>=0;i--)
  {
  // for(j=3;j>0;j++)
 // printf("str=%c str1=%c ",str[i],str1[i]);
     j++;
     str3[i]=(str[i]-'0')+(str1[i]-'0');
   printf("%c",str3[j]);//  str3[j]
    //j++;
  // printf("% ",sum);
  }
  str3[j]=='\0';
 //printf("%s",str3);
  return 0;
}
