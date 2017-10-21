#include<stdio.h>
#include<string.h>
#include<math.h>
bool check[200000];
int ara[16000];

void sieve()
{
 int i,j,k,l,m,n;
 memset(check,true,sizeof(check));
 check[1]=check[2]=false;
 k=sqrt(200000);

for(i=3;i<=k;i=i+2)
 {
  if(check[i]==true)
  {
  // printf("%d\n",i);
   for(j=i*2;j<=200000;j=j+i)
   check[j]=false;
  }
 }

 j=1;
 ara[j]=2;
 j++;

 for(i=3;i<=200000;i=i+2)
 {
  if(check[i]==true)
  {
   if(j>15000)
   break;
  // printf("%d\n",i);
   ara[j]=i;
   j++;
  }
 }
}

int main()
{
 int i,j,k,l,m,n,t;
 sieve();
 scanf("%d",&t);
 while(t--)
 {
   scanf("%d",&n);
   printf("%d\n",ara[n]);
 }
}
