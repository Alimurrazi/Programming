#include<stdio.h>
int m;
void no(int i,int j)
{
  printf("%d\n",m);
}
int main()
{
  int i,j;
  m=0;
  i=10,j=11,m=33;
  no(i,j);
}
