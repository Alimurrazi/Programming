#include<stdio.h>
#include<string.h>

int r,c,coun,coun1;
char str[102][102];

void floodfill(int x,int y)
{
  if(x>-1 && y>-1 && x<r && y<c)
  {
    if(str[x][y]=='*')
    {
      str[x][y]='.';
      coun++;
      floodfill(x-1,y-1);
      floodfill(x-1,y);
      floodfill(x-1,y+1);
      floodfill(x,y-1);
      floodfill(x,y+1);
      floodfill(x+1,y-1);
      floodfill(x+1,y);
      floodfill(x+1,y+1);
    }
  }
}

int main()
{
  int i,j,k,l,m,n;
  char str1;
  while(scanf("%d%d%*c",&r,&c)==2)
  {
    if(r==0 && c==0)
    return 0;
  //  for(i=0;i<r;i++)
   // {
    //  for(j=0;j<c;j++)
    //  {
    //    scanf("%c",&str[i][j]);
    //  }
   // }
    for(i=0;i<r;i++)
    {
     scanf("%s",str[i]);
    }
   coun1=0;
   for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
     {
       coun=0;
       if(str[i][j]=='*')
       {
       floodfill(i,j);
       if(coun==1)
       coun1++;
       }
     }
   }
   printf("%d\n",coun1);
  }
}
