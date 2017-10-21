#include<stdio.h>
int main()
{
 int ara[12];
 int i=0,j,k,n,length=0;
 scanf("%d",&n);
 while(n>0)
 {
  ara[i]=n%2;
  n=n/2;
  //i++;
  length++;
 }
 for(i=length-1;i>=0;i--)
 {
  printf("%d",ara[i]);
 }
 return 0;
}
