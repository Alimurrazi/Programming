#include<stdio.h>
#include<math.h>
struct twin
{
long int n,m;
};
int prim(int n)
{
 long int i,j,k;
  k=sqrt(n);
  for(i=2;i<=k;i++)
  {
    if(n%i==0)
     return 0;
  }
  if(i>k)
     return 1;
}
int main()
{
 struct twin prime[100005];
long int i,j,k,p=1,l,key,count;
//prime[p].m=i;
 for(i=3;i=20000000 ; )
 {
  if(prim(i)==1 && prim(i+2)==1)
  {
    prime[p].m=i;
    prime[p].n=i+2;
    p++;
   // if(p==100000)
     //   break;
  }
  i=i+4;
 }
 printf("k");
 return 0;
 while(1)
 {
   scanf("%ld",&l);
   printf("(%ld, %ld)\n",prime[l].m,prime[l].n);
 }
 return 0;
}
