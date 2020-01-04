#include<stdio.h>
int main()
{
 int i,j,n,m,t;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d%d",&n,&m);
  if(n<m)
       printf("<\n");
  if(n>m)
    printf(">\n");
  if(n==m)
    printf("=\n");
 }
 return 0;
}
