#include<stdio.h>
int main()
{
 int n,i,k,l,o,p,j,m;
 int ara[50];
 scanf("%d",&m);
 for(i=0;i<m;i++)
 {
  scanf("%d",&ara[i]);
 }
 if(m==1)
 {
  printf("%d",ara[m-1]*ara[m-1]);
 }
 if(m==2)
 {
  printf("%d",(ara[m-1])-(ara[m-2]));
 }
 return 0;
}
