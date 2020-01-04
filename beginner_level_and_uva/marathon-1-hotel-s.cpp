#include<stdio.h>

int ara[102][102];
int n,serial;

int check(int x,int y)
{
  if(x>=1 && x<=n && y>=1 && y<=n)
  {
    ara[x][y]=serial;
    serial=serial+1;
    check(x+1,y+1);
  }
}

int main()
{
 int i,j,k,l,m;
 while(scanf("%d",&n)==1)
 {
  serial=1;
  for(j=n;j>=1;j--)
  check(1,j);
  for(i=2;i<=n;i++)
  check(i,1);
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
    if(j>1)
    printf(" ");
    printf("%d",ara[i][j]);
   }
   printf("\n");
  }
 }
}
