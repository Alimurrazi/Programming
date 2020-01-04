#include<stdio.h>
int main()
{
 char str[100];
 int T,sum=0;
 while(1)
 {
  if(scanf("%s%d",str,&T))
    sum=sum+T;
  if(scanf("%s",str))
    printf("%d",sum);
 }
 return 0;
}
