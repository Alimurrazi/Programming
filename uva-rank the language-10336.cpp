#include<stdio.h>

char ara[100][100];
char ch;

//void bfs(int i,int j)
//{
 // if(ara[i][j]==ch && i>-1 && j>-1)
 // {
  //  ara[i][j]='\0';
  //  bfs(i-1,j-1);
  //  bfs(i-1,j);
  //  bfs(i-1,j+1);
  //  bfs(i,j-1);
  //  bfs(i,j+1);
  //  bfs(i+1,j-1);
  //  bfs(i+1,j);
  //  bfs(i+1,j+1);
 // }
//}

void floodfill(int i,int j)
{

 // if(i>-1 && j>-1 && i<n && j<n && ara[i][j]=='1')
 if(ara[i][j]=='1')//ch)
  {
   ara[i][j]='\0';
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
 int i,j,k,l=0,m,n;
 char ch;
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
  //ch=ara[0][0];
  ch='0'+1;
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
     if(ara[i][j]=='1')//ch)
     {
      k++;
      floodfill(i,j);
      printf("%d ",k);
     }
   }
  }
  printf("Image number %d contains %d war eagles.\n",l,k);
 }
}

//return 0;
