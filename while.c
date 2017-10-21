#include<stdio.h>
int dog(int a)
{
 int i=0,c;
 while(scanf("%d",&a)!=EOF)
 {
  c=a*a;
  printf("%d\n",c);
 }
 return 0;
}
int main()
{
 int a;
 while(a!=0)
 {
  scanf("%d",&a);
  printf("%d\n",a);
 }
 return 0;
}
