#include<stdio.h>
int main()
{
  int ara[7][7];
  int i,j,k,l,m,n;

  for(i=1;i<=5;i++)
  {
  for(j=1;j<=5;j++)
  {
   scanf("%d",&ara[i][j]);
   if(ara[i][j]==-1)
   ara[i][j]=999999999;
  }
  }

  for(k=1;k<=5;k++)
  {
  for(i=1;i<=5;i++)
  {
  for(j=1;j<=5;j++)
  {
 //  if(ara[i][k]==-1 || ara[k][j]==-1 )//|| ara[i][j]==-1)
 //  continue;
   if((ara[i][k]+ara[k][j])<ara[i][j])
   ara[i][j]=ara[i][k]+ara[k][j];
  }
  }
  }

  for(i=1;i<=5;i++)
  {
  for(j=1;j<=5;j++)
  {
   printf("%d ",ara[i][j]);
  }
  printf("\n");
  }
}
