#include<stdio.h>
int main()
{
 int ara[3000];
 int i,j,k,n,m,temp;
 while(scanf("%d",&n)==1)
 {
   m=1,ara[0]=1,temp=0;
   for(i=1;i<=n;i++)
   {
     for(j=0;j<m;j++)
     {
       k=ara[j]*i+temp;
       ara[j]=k%10;
       temp=k/10;
     }
     while(temp>0)
     {
       ara[m]=temp%10;
       temp=temp/10;
       m++;
     }
   }
   printf("%d!\n",n);
   for(i=m-1;i>=0;i--)
   {
     printf("%d",ara[i]);
   }
   printf("\n");
 }
 return 0;
}
