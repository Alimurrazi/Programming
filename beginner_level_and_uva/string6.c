#include<stdio.h>
int main()
{
 char str1[100];
 char str[100]={"bangladesh"};
 int i,j,k,l,count=0;
 for(i=0;i<10;i++)
 {j=0;
  if(str[i]=='a'||str[i]=='b')
  {
    j++;
    count++;
    str1[j]==str[i];
  }
  else
    continue;
  str1[j]='\0';
 }
 printf("%d",count);
 printf("%s",str1);
 return 0;
}
