#include<stdio.h>
#include<string.h>
char str[101][101];
int k,r,c;
bool check[101][101];

void dfs(int x,int y)
{
  if(str[x][y]=='L'|| x<0 || y<0 || check[x][y]==true || x>=r || y>=c)
   return;
  if(str[x][y]=='W' && x>-1 && y>-1 && check[x][y]==false && x<r && y<c)
  {
   k++;
   check[x][y]=true;
   dfs(x-1,y-1);
   dfs(x-1,y);
   dfs(x-1,y+1);
   dfs(x,y-1);
   dfs(x,y+1);
   dfs(x+1,y-1);
   dfs(x+1,y);
   dfs(x+1,y+1);
  }
}

int main()
{
  char str1[101];
  char str2[101];
  int i,j,l,m,n,t,a=0;
  scanf("%d%*c",&t);
  getchar();
  while(t--)
  {
   memset(str,'\0',sizeof(str));
   for(i=0; ;i++)
   {
    gets(str1);
    if(str1[0]>='0' && str1[0]<='9')
    {
      a=0;
     strcpy(str2,str1);
      break;
    }
    strcpy(str[i],str1);
   }
   r=i;
   c=strlen(str[0]);
   //while((sscanf(str1,"%d%d",&m,&n))!=EOF)
   if(a==0)
   {
     sscanf(str2,"%d%d",&m,&n);
     k=0;
     memset(check,false,sizeof(check));
     m=m-1,n=n-1;
     dfs(m,n);
     printf("%d\n",k);
     a=1;
   }
   while(gets(str1))
   {
     if(str1[0]=='\0')
     break;
     sscanf(str1,"%d%d",&m,&n);
     k=0;
     memset(check,false,sizeof(check));
     m=m-1,n=n-1;
     dfs(m,n);
     printf("%d\n",k);
     //if(t==0)
    // break;
     k=0;
   //  gets(str1);
   }
  if(t>0)
  printf("\n");
  }
  return 0;
}
