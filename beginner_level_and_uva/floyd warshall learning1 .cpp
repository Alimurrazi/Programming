/*
 4 3 8
 3 2 5
 2 1 2
 4 1 20
 1 2 3
 2 3 2
*/
#include<stdio.h>
#include<string.h>
int root[10][10];

int path(int i,int j)
{
 if(i!=j)
 path(i,root[i][j]);
 printf("%d\n",j);
}

int main()
{
 int ara[10][10];

 int i,j,k,l,m,n,x,y;
 for(i=1;i<=5;i++)
 {
 for(j=1;j<=5;j++)
 {
 if(i==j)
 ara[i][j]=0;
 else
 ara[i][j]=100000;
 root[i][j]=i;
 }
 }

 for(i=1;i<=6;i++)
 {
  scanf("%d%d%d",&x,&y,&k);
  ara[x][y]=k;
 // ara[y][x]=k;
 }

 for(k=1;k<=4;k++)
 {
 for(i=1;i<=4;i++)
 {
 for(j=1;j<=4;j++)
 {
  if((ara[i][k]+ara[k][j])<ara[i][j])
  {
  ara[i][j]=ara[i][k]+ara[k][j];
  root[i][j]=root[k][j];
  }
 }
 }
 }
 path(1,3);
 for(i=1;i<=4;i++)
 {
  for(j=1;j<=4;j++)
  {
   printf("%d %d %d\n",i,j,ara[i][j]);
  }
 }
 }
