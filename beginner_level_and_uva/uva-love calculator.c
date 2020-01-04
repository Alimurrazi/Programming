#include<stdio.h>
#include<string.h>
int rec(int n)
{
 int sum=0,t;
 while(n>0)
 {
  t=n%10;
  sum=sum+t;
  n=n/10;
 }
 if(sum>=10)
 {
  n=sum;
  return rec(n);
 }
 else
    return sum;
}
int recu(int m)
{
 int sum1=0,k;
 while(m>0)
 {
  k=m%10;
  sum1=sum1+k;
  m=m/10;
 }
  if(sum1>=10)
  {
   m=sum1;
   return recu(m);
  }
  else
    return sum1;
}
int main()
{
 char str[100],str1[100];
 int t,i,j,k,len,len1,m,n;
 float sum,sum1,res;
 while(gets(str))
 {
  gets(str1);
  len=strlen(str);
  len1=strlen(str1);
   n=0,m=0,sum=0,sum1=0;
  for(i=0;i<len;i++)
  {
   if(str[i]>='a'&& str[i]<='z')
   {
    n=n+(str[i]-'a'+1);
   }
   else if(str[i]>='A'&& str[i]<='Z')
   {
    n=n+(str[i]-'A'+1);
   }
   else
    continue;
  }
  for(i=0;i<len1;i++)
  {
   if(str1[i]>='a'&& str1[i]<='z')
   {
    m=m+(str1[i]-'a'+1);
   }
  else if(str1[i]>='A'&& str1[i]<='Z')
  {
   m=m+(str1[i]-'A'+1);
  }
  else
    continue;
  }
 sum=rec(n);
 sum1=recu(m);
 if(sum>sum1)
    {
     res=(sum1/sum)*100;
    }
 else
     res=(sum/sum1)*100;

    printf("%.2f %%\n",res);
 }

 return 0;
}
