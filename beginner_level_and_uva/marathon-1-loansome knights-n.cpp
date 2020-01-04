#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;
int coun;

int ara[10]= {-1,1,2,-2,-2,2,-1,1};
int ara1[10]={2,2,1,1,-1,-1,-2,-2};
void floodfill(int x,int y)
{
 int i,j,k,r,c;
 for(i=0;i<8;i++)
 {
  r=x+ara[i];
  c=y+ara1[i];
  if(r>0 && c>0 && r<=8 && c<=8)
  coun++;
 }
}

int main()
{
 char str[50];
 int i,j,k,l,m,n,t,x,y;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%s",str);
  x=str[0]-'a'+1;
  y=str[1]-'0';
  coun=0;
  floodfill(x,y);
  printf("%d\n",coun);
 }
}
