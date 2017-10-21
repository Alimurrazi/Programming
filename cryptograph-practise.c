#include<stdio.h>
int main()
{
 int i,j,k,l,m,n,p,q;
 scanf("%d%d",&p,&q);
 for(i=1;i<=q;i++)
 {
 n=i,k=1;
 for(j=1;j<=p;j++)
 {
  m=n*k;
  k=m;
 }
 if(k==q)
    printf("%d",i);
 }
 return 0;
}
