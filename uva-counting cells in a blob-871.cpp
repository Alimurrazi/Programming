#include<stdio.h>
#include<string.h>

char str1[50][50];
int k=0,r,c;

void bfs(int i,int j)
{
  if(i>-1 && j>-1 && i<r && j<c && str1[i][j]=='1')
  {
   k++;
   str1[i][j]='0';
    bfs(i-1,j-1);
    bfs(i-1,j);
    bfs(i-1,j+1);
    bfs(i,j-1);
    bfs(i,j+1);
    bfs(i+1,j-1);
    bfs(i+1,j);
    bfs(i+1,j+1);
  }
  else
    return ;
}

int main()
{
  char str[300];
  int i,j,l,m,n,maxe,t;
  i=0,c=0,r=0;
  scanf("%d",&t);
  getchar();
  getchar();
  while(t--)
  {
   r=0,c=0,i=0,j=0;
  //while(1)
  //{
  //  gets(str);
    //l=strlen(str);
   // if(l==0)
   // break;
  //  if(str[0]=='\0')
  //  break;
  //  r++;
  //  strcpy(str1[i],str);
  //  i++;
 // }
  while(gets(str1[i]))
  {
    if(str1[i][0]=='\0')
        break;
    i++;
    r++;
  }
  c=strlen(str1[0]);
  k=0;
  maxe=0;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
     if(str1[i][j]=='1')
      {
      k=0;
      bfs(i,j);
      if(k>maxe)
      maxe=k;
      k=0;
      }
    }
  }
  if(t==0)
  printf("%d\n",maxe);
  else
  printf("%d\n\n",maxe);
  }
}
