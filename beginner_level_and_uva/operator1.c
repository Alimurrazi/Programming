#include<stdio.h>
 void ma(int a)
{
// int a;
 while(a!=0)
 {
  scanf("%X",&a);
  printf("\n");
  printf("%06d",a);
 }
 //return 0;
}
int main()
{
 char str[50];
 scanf("%s",str);
 printf("\n%5.2s",str);
 return 0;
}
