#include<stdio.h>
#include<string.h>
int main()
{
 char str[1000050],str1[1000050],sum[1000050];
 // char str[1000],str1[1000],sum[1000];
 long t,n,i,j,k,l,m,temp;
 while(scanf("%ld",&t)==1)
 {
 for(l=0;l<t;l++)
 {
   scanf("%ld",&n);
   temp=0;
   for(i=0;i<n;i++)
    scanf("%d%d",&str[i],&str1[i]);
   for(i=0;i<n;i++)
   {
   k=(str[n-1-i]+str1[n-1-i])+temp;
   sum[i]=k%10;
   temp=k/10;
   }
   for(i=n-1;i>=0;i--)
    printf("%d",sum[i]);
    printf("\n");
   if(l!=t-1)
    printf("\n");
 }
 }
return 0;
}
