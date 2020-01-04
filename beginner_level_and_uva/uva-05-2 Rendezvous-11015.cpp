#include<stdio.h>
#include<string.h>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int ara[25][25];
bool check[25][25];
int infinity=900000000;

int main()
{
    int i,j,k,l,m,n,x,y,mini,minih,man,serial=0;
    map< int,string >mapp;
    string nam;

    while(scanf("%d%d",&m,&n)==2)
    {
     if(m==0 && n==0)
      return 0;
    memset(check,false,sizeof(check));

    for(i=1;i<=m;i++)
    {
     for(j=1;j<=m;j++)
     ara[i][j]=infinity;
    }

    for(i=1;i<=m;i++)
    {
     cin >> nam;
     mapp[i]=nam;
    }

    for(i=0;i<n;i++)
    {
    scanf("%d%d%d",&x,&y,&k);
    ara[x][y]=k;
    ara[y][x]=k;
    check[x][y]=check[y][x]=true;
    }

   for(k=1;k<=m;k++)
   {
    for(i=1;i<=m;i++)
    {
    for(j=1;j<=m;j++)
    {
     if((ara[i][k]+ara[k][j])<ara[i][j])
     ara[i][j]=ara[i][k]+ara[k][j];
    }
    }
   }

   mini=infinity,minih=0;
   for(i=1;i<=m;i++)
   {
    man=0;
   for(j=1;j<=m;j++)
   {
    if(i==j)
    continue;
    man=man+ara[i][j];
   }
   if(man<mini)
   {
    mini=man;
    minih=i;
   }
  // printf("%d %d %d\n",i,j,ara[i][j]);
   }
   serial++;
   printf("Case #%d : ",serial);
   cout << mapp[minih];
   printf("\n");
   mapp.clear();
 }
}
