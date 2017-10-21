#include<stdio.h>
int main()
{
 int a,b,c;
 while(scanf("%d%d%d",&a,&b,&c)!=EOF)
 {
  if((a==b)&&(c!=a))
  {
   printf("C\n");
   continue;
  }
 else if((b==c)&&(a!=b))
  {
   printf("A\n");
   continue;
  }
 else if((c==a)&&(b!=c))
  {
   printf("B\n");
   continue;
  }
 else
 {
  printf("*\n");
  continue;
 }
 }
 return 0;
}
