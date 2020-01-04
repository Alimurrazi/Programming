#include<stdio.h>
#include<string.h>
char strin(char str[100])
{
 int i=0,j=0,k,l;
 char str1[100];
 scanf("%s",str);
 while(1)
 {
  //if(str[i]=='a')
    //    continue;
  //else{

   if(str[i]=='a'){
  str1[j]=str[i];
  j++;
 // i++;
  }
  if(str[i]=='\0'){
        break;}
else{
     i++;
    continue;
    }
    i++;
    //j++;
 }
strupr(str1);
 printf("%s",str1);
 return str1[100];
}
int main()
{
 char str[100];
 strin(str);
 return 0;
}
