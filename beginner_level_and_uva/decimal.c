#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
char str[12];
int i,j,k,n,decim=0,len,power;
scanf("%s",&str);
len=strlen(str);
power=len-1;
for(i=0;i<len;i++)
{
 decim=decim+(str[i]-'0')*pow(2,power);
 power--;
}
printf("%d",decim);
return 0;
}
