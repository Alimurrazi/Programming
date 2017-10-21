#include<stdio.h>
long long recur(int k)
{
 int i,j,c=0,count=1,n;
 //k=2;
 n=k;
 //n=16;
 while(n!=1)
 {
  if(n%2==0)
    n=recur(n/2);
 }
 printf("%d",n);
}
int main()
{
 int n=16;
 recur(n);
 return 0;
}
