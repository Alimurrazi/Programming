#include<stdio.h>
#include<string.h>
int x[]={-1,-1,-1,0,0,1,1,1};
int y[]={-1,0,1,-1,1,-1,1,0};
 char str1[110][110];
void bfs(char str1[110][110],int i,int j,int m,int n)
{
 int p,u,v;
 if(i<m&&j<n&&i>-1&&j>-1)
 {
   if(str1[i][j]=='@')
   {
       str1[i][j]='*';
   for(p=0;p<8;p++)
   {
     u=i+x[p];
     v=j+y[p];
     printf("(%d %d) ",u,v);
     bfs(str1,u,v,m,n);
   }
   }
 }
}
int main()
{
  char str[110];

  int i,j,k,l,m,n,oil;
  while(scanf("%d%d",&m,&n)==2)
  {
   if(m==0)
     return 0;
   memset(str1,'*',sizeof(str1));
   for(i=0;i<m;i++)
   {
    scanf("%s",str);
    strcpy(str1[i],str);
   }
   oil=0;
   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
     if(str1[i][j]=='@')
     {
       oil++;
       bfs(str1,i,j,m,n);
     }
    }
   }
   printf("%d\n",oil);
  }
}
