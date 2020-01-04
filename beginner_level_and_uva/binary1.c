#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
 char str[100];
 int i,j,binary,length;
 //while(scanf("%s",str)==EOF)
 //{
 scanf("%s",str);
  binary=0;
  length=strlen(str);
  //printf("%d--",length);
  j=length-1;
  for(i=0;i<length;i++)
  {

    binary+=(str[i]-'0')*pow(2,j);
    j--;}
   printf("%d",binary);

 //}
 return 0;
}
