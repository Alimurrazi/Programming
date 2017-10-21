#include<stdio.h>
int main()
{
 int i,j,k,l,m,o,p,n,q;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=n;j>=i;j--)
   printf(" *");
  for(k=1;k<=i;k++)
   printf("    ");
  for(l=n;l>=i;l--)
   printf(" *");
  printf("\n");
 }
 for(m=1;m<=n;m++)
 {
  for(o=1;o<=m;o++)
   printf(" *");
 for(p=n;p>=m;p--)
   printf("    ");
 for(q=1;q<=m;q++)
    printf(" *");
printf("\n");
 }
 return 0;
}
