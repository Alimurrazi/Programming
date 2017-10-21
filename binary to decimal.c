#include<stdio.h>
int main()
{
 int ara[100],i=0,count=0;
 int n=25;
 while(n!=0)
 {
  ara[i]=n%2;
 // printf("%d\n",ara[i]);
  n=n/2;
  count++;
  i++;
 }
 for(i=count-1;i>=0;i--)
 {
  printf("%d",ara[i]);
 }
 return 0;
}
