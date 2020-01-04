#include<stdio.h>
int main()
{
 int m,n,count;
 while(1)
 {
  scanf("%d%d",&m,&n);
  count=0;
 while((m!=0)||(n!=0))
 {
  m=m-1;
  n=n-1;
  count++;
 }
 printf("%d\n",count);
 }
}
