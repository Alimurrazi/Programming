#include<stdio.h>
int main()
{
 int ara[100];
 int i,j=0,n=8,m=2;
 char str[40]={"dhaka 23"};
 for(i=0;i<n;i++)
 {
  if(str[i]=='2'||str[i]=='3')
  {
    ara[j]=(str[i]-48);
    j++;
  }
 }
 for(i=0;i<m;i++)
 {
  printf("%d ",ara[i]);
 }
    return 0;
}
