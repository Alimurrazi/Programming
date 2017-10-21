#include<stdio.h>
#include<string.h>
char input(char str[100])
{
 int length,i,j,k;
 gets(str);
 //length=strlen(str);
 return str[100];
}
char manage(char str[100],char str1[100])
{
// char str1[100];
 int i,j,k,length;
 input(str);
 length=strlen(str);
 for(i=0,j=0;i<length;i++,j++)
 {
  if(str[i]=='a'||str[i]=='b'||str[i]=='c'||str[i]=='d');//str[i]='e'||str[i]='f'str[i]='g'||str[i]='h'str[i]='i'||str[i]='j'str[i]='k'||str[i]='l'str[i]='m'||str[i]='n'str[i]='o'||str[i]='p'str[i]='q'||str[i]='r'str[i]='s'||str[i]='t'str[i]='u'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b'str[i]='a'||str[i]='b');
 {
  str1[j]=str[i];
 }
 }
 str1[j]='\0';
 return str1[100];
}
int main()
{
 char str[100];
 char str1[100];
 int i,j,k,l;
 input(str);
 manage(str,str1);
 printf("%s",str1);
 return 0;
}
