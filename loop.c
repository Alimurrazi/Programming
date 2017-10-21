#include<stdio.h>
int main()
{
 int i,a,j,n,k;
 scanf("%d",&n);
 for(i=1;i<=n;i++){
  for(k=n;k>=i;k--)
  {
   printf(" ");
  }
  for(j=1;j<=i;j++){
   printf(" c");
  }
  printf("\n");
 }
 return 0;
}
