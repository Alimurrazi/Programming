#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
 char str[10000],str1[3]={"0"};
 unsigned long long n,k,l,i,j,length;
 while(1)
 {
  scanf("%s",str);
  if(strcmp(str,str1)==0)
    return 0;
  n=0;
  length=strlen(str);
  for(i=0;i<length;i++)
  {
   n=n+((str[i]-'0')*(pow(2,(length-i))-1));
  }
  printf("%llu\n",n);
 }
  return 0;
}
