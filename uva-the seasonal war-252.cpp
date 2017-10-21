#include<stdio.h>

char ara[30][30];
int n;

void floodfill(int i,int j)
{

  if(i>-1 && j>-1 && i<n && j<n && ara[i][j]=='1')
  {
   ara[i][j]='0';
   floodfill(i-1,j-1);
   floodfill(i-1,j);
   floodfill(i-1,j+1);
   floodfill(i,j-1);
   floodfill(i,j+1);
   floodfill(i+1,j-1);
   floodfill(i+1,j);
   floodfill(i+1,j+1);
  }
}

int main()
{
 char str[30];
 int i,j,k,l=0,m;
 while(scanf("%d",&n)==1)
 {
  l++;
  for(i=0;i<n;i++)
  {
   scanf("%s",str);
   for(j=0;j<n;j++)
   {
    ara[i][j]=str[j];
   }
  }
  k=0;
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
     if(ara[i][j]=='1')
     {
      k++;
      floodfill(i,j);
     }
   }
  }
  printf("Image number %d contains %d war eagles.\n",l,k);
 }
}
