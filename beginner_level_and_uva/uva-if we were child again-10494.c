#include<stdio.h>
#include<string.h>
int main()
{
 char str[1100],c[3];
 long long i,j,k,l,m,n,p;
 while(scanf("%s%s%lld",str,c,&n)!=EOF)
 {
   if(strcmp(c,"/")==0)
   {
     p=1,m=0,i=0;
     while(str[i])
     {
       m=m*10+str[i]-'0';
       if(m/n!=0)
         p=0;
       if(p==0)
        printf("%lld",m/n);
       m=m%n;
       i++;
     }
     if(p==0)
     printf("\n");
     if(p==1)
       printf("0\n");
   }
   if(strcmp(c,"%")==0)
   {
     m=0,i=0;
     while(str[i])
     {
      m=m*10+str[i]-'0';
      m=m%n;
      i++;
     }
     printf("%lld\n",m);
   }
 }
 return 0;
}
