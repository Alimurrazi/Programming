#include<stdio.h>
int main()
{
 int i,j,k,l,n,m;
 while(scanf("%d",&n)==1)
 {
  n=12-n;
  if((n*45)<240)
  printf("YES\n");
  else
  printf("NO\n");
 }
}
