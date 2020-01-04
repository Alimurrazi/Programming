#include<stdio.h>
int main()
{
  int i,j,k,l,m,n;
  while(scanf("%d%d",&m,&n)==2)
  {
   k=m+n-1;
   printf("%d %d\n",k-m,k-n);
  }
}
