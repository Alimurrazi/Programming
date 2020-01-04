#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
using namespace std;
char str[100][100];
bool check[100][100];
char str1[27];
int ara[150];
char c;
int w,h,k;

struct ab
{
  char ch;
  int ser;
};
ab res[100];

bool copm(ab x,ab y)
{
  if(x.ser==y.ser)
   return x.ch<y.ch;
  return x.ser>y.ser;
}

void floodfill(int i,int j)
{
  if(i<0 || j<0 || i>=w || j>=h)
     return;
  if(i>-1 && j>-1 && i<w && j<h)
 {
    if(str[i][j]==c)
    {
     check[i][j]=true;
     str[i][j]='\0';
     floodfill(i,j+1);
     floodfill(i-1,j);
     floodfill(i,j-1);
     floodfill(i+1,j);
    }
 }
}

int main()
{
 int i,j,t,p,m,l;
 scanf("%d",&t);
 for(l=1;l<=t;l++)
 {
  scanf("%d%d",&w,&h);
  k=0;
  memset(str,'\0',sizeof(str));
  memset(check,false,sizeof(check));
  memset(ara,0,sizeof(ara));
  for(i=0;i<w;i++)
  {
   scanf("%s",str[i]);
  }
  for(i=0;i<w;i++)
  {
   for(j=0;j<h;j++)
   {
    c=str[i][j];
    p=c;
    if(check[i][j]==false)
    {
    floodfill(i,j);
    ara[p]=ara[p]+1;
    }
   }
  }
  m=0;
  for(i=97;i<=123;i++)
  {
    if(ara[i]>0)
    {
      res[m].ch=i;
      res[m].ser=ara[i];
      m++;
    }
  }
  sort(res,res+m,copm);
  printf("World #%d\n",l);
  for(i=0;i<m;i++)
  printf("%c: %d\n",res[i].ch,res[i].ser);
 }
}
