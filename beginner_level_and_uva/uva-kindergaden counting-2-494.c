#include<stdio.h>
#include<string.h>
int main()
{
 char str[20000];
 int i,j,k,l,n,m,count;
 while(gets(str))
 {
  l=strlen(str);
  count=0;
  for(i=0;i<l;i++)
  {
   if(str[i]>=65 && str[i]<=90)
        str[i]=str[i]-'A'+'a';
  }
  for(i=0;i<l;i++)
    {
if(str[i]=='a'||str[i]=='b'||str[i]=='c'||str[i]=='d'||str[i]=='e'||str[i]=='f'||str[i]=='g'||str[i]=='h'||str[i]=='i'||str[i]=='j'||str[i]=='k'||str[i]=='l'||str[i]=='m'||str[i]=='n'||str[i]=='o'||str[i]=='p'||str[i]=='q'||str[i]=='r'||str[i]=='s'||str[i]=='t'||str[i]=='u'||str[i]=='v'||str[i]=='w'||str[i]=='x'||str[i]=='y'||str[i]=='z')
     {
if(str[i+1]!='a'&&str[i+1]!='b'&&str[i+1]!='c'&&str[i+1]!='d'&&str[i+1]!='e'&&str[i+1]!='f'&&str[i+1]!='g'&&str[i+1]!='h'&&str[i+1]!='i'&&str[i+1]!='j'&&str[i+1]!='k'&&str[i+1]!='l'&&str[i+1]!='m'&&str[i+1]!='n'&&str[i+1]!='o'&&str[i+1]!='p'&&str[i+1]!='q'&&str[i+1]!='r'&&str[i+1]!='s'&&str[i+1]!='t'&&str[i+1]!='u'&&str[i+1]!='v'&&str[i+1]!='w'&&str[i+1]!='x'&&str[i+1]!='y'&&str[i+1]!='z')
    count++;
     }
    }
  printf("%d\n",count);
 }
}
