#include<stdio.h>
#include<string.h>

int main()
{
    char str[1010];
    int i,j,k,l,m,n,degree;
    while(scanf("%s",str)==1)
    {
     if(strcmp(str,"0")==0)
     return 0;
     l=strlen(str);
     n=0,degree=0;

     for(i=0;i<l;i++)
     {
     n=n+str[i]-'0';
     }

     while(1)
     {
      if(n%9==0)
      degree++;
      if(n<=9)
      break;
      m=0;
      while(n!=0)
      {
       m=m+n%10;
       n=n/10;
      }
      n=m;
     }

     if(degree==0)
     printf("%s is not a multiple of 9.\n",str);
     else
     printf("%s is a multiple of 9 and has 9-degree %d.\n",str,degree);
    }
}
