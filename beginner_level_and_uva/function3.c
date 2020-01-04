#include<stdio.h>
int max(int x,int y)
{
  int z=(x>=y)?x:y;
  return(z);
}
int main()
{
 int a=10,b=20,c=67,d;
 d=max(a,b);
 printf("%d",max(c,d));
 return 0;
}

