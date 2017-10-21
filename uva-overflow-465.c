#include<stdio.h>
#include<string.h>
int main()
{
 char s1[10000], s2[10000], s3[10000],in[12]={"2147483647"},tempr[1000];
 char id[5];
 int i,j,l,m,temp,length1,length2;
 int lin=strlen(in);
 long long k,n,mn=2147483647,res;
 while(scanf("%s%s%s",s1,id,s2)==3)
 {
   n=0,j=0,temp=0,res=0,k=0;
   length1=strlen(s1);
   length2=strlen(s2);
   printf("%s %s %s\n",s1,id,s2);
   if(length1>lin)
   {
     printf("first number too big\n");
     res=1;
   }
   if(length1==lin)
   {
     if(strcmp(s1,in)>0)
     {
       printf("first number too big\n");
       res=1;
     }
   }
   if(length2>lin)
   {
     printf("second number too big\n");
     res=1;
   }
   if(length2==lin)
   {
     if(strcmp(s2,in)>0)
     {
       printf("second number too big\n");
       res=1;
     }
   }
    if(length2>length1)
    {
      strcpy(tempr,s1);
      strcpy(s1,s2);
      strcpy(s2,tempr);
      temp=length1;
      length1=length2;
      length2=temp;
    }
    temp=0;
   if(strcmp(id,"*")==0)
   {
     n=0,temp=0;
    for(i=0;i<length2;i++)
    {
     n=n*10+(s2[i]-'0');
    }
   j=0;
    for(i=length1-1;i>=0;i--)
    {
      k=(s1[i]-'0')*n+temp;
      s3[j++]=(k%10)+'0';
      temp=(k/10);
    }
    if(temp>0)
    {
     s3[j]=temp+'0';
    s3[j+1]='\0';
    l=j;
    }
    else
    {
     s3[j]='\0';
     l=j-1;
    }
    printf("s3==%s ",s3);
    res=0;
    for(i=l,j=0;i>=0;i--,j++)
    {
      s1[j]=s3[i];
      if(s1[j]=='0')
       res++;
    }
    s1[j]='\0';
    printf("%s ",s1);
    if(j>lin && res!=j )
      printf("result too big\n");
    if(j==lin && res!=j)
    {
      if(strcmp(s1,in)>0)
       printf("result too big\n");
    }
   }
  if(strcmp(id,"+")==0)
  {
    for(i=0;i<length2;i++)
    {
      k=(s1[length1-1-i]-'0')+(s2[length2-1-i]-'0')+temp;
      s3[j]=(k%10)+'0';
      temp=k/10;
      j++;
    }
    for(i=length2;i<length1;i++)
    {
      k=(s1[length1-1-i]-'0')+0+temp;
      s3[j]=(k%10)+'0';
      temp=k/10;
      j++;
    }
    if(temp>0)
    {
     s3[j]=temp;
     s3[j+1]='\0';
     l=j;
    }
    else
    {
     s3[j]='\0';
     l=j-1;
    }
    for(i=l,k=0;i>=0;i--,k++)
      s1[k]=s3[i];
    s1[k]='\0';
    if(k>lin)
     printf("result too big\n");
    if(k==lin)
    {
      if(strcmp(s1,in)>0)
     printf("result too big\n");
    }
  }
 }
 return 0;
}
