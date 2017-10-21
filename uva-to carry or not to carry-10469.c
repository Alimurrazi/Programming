#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
  char str1[12000],str2[12000],str3[12000];
  long long n,m,k,j,l,i,length1,length2,temp;
  while(scanf("%lld%lld",&m,&n)!=EOF)
  {
   if(n>m)
   {
    temp=m;
    m=n;
    n=temp;
   }
   i=0;
   while(m!=0)
   {
    str1[i]=(m%2)+48;
    m=m/2;
   // printf("%c",str1[i]);
    i++;
   }
   str1[i]='\0';
   i=0;
   while(n!=0)
   {
     str2[i]=(n%2)+48;
     n=n/2;
     i++;
  }
  str2[i]='\0';
   length1=strlen(str1);
   length2=strlen(str2);
   i=0;
  // printf("%s %s",str1,str2);
  while(i!=length2)
  {
   k=(str1[i]-48)+(str2[i]-48);
   if(str1[i]=='1'&&str2[i]=='1')
      k=0;
   str3[i]=k+48;
   i++;
  }
  while(i!=length1)
  {
   k=(str1[i]-48)+0;
   str3[i]=k+48;
   i++;
  }
  str3[i]='\0';
 // printf("%s",str3);
 // length1=strlen(str3);
 l=0;
 for(i=0;i<length1;i++)
 {
   l+=((str3[i]-48)*pow(2,i));
 }
 printf("%lld\n",l);
  }
  return 0;
}
