#include<stdio.h>
#include<math.h>
int main()
{
 char str[100]={"110"};
 int i=0,j,sum=0;
 for(i=0;i<3;i++)
 {
  sum+=(str[i]-'0')*pow(2,i);
 }
 printf("%d ",sum);
 return 0;
}
