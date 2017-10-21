#include<stdio.h>

int ara[102][102];
int n,p;

void check(int x,int y)
{
 if(x>=1 && x<=n && y>=1 && y<=n)
 {
   if(p==1)
   printf(" ");
   printf("%d",ara[x][y]);
   p=1;
   check(x-1,y+1);
 }
}

int main()
{
 int i,j,k,l,m;
 while(scanf("%d",&n)==1)
 {
  p=0;
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   scanf("%d",&ara[i][j]);
  }
  for(i=1;i<=n;i++)
  check(i,1);
  for(i=2;i<=n;i++)
  check(n,i);
  printf("\n");
 }
}
