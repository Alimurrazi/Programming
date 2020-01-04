#include<stdio.h>
int main()
{
 char str[100]={"tangail"};
 char str1[100];
 int i,j,k,l,length;
 printf("%s ",str);
 for(i=0;i<=6;i++)
 {j=0;
 //str1[j]=str[i];
 //j++;
 if(str[i]=='a')
    continue;
else{
    str1[j]=str[i];
j++;}
 }
str1[j]='\0';
 printf("%s",str1);
    return 0;
}
