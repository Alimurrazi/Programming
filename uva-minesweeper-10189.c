#include<stdio.h>
#include<string.h>
int main()
{
  char str[101][101];
  char str1[101][101];
  char c;
  int i,j,k,l,n,m,x,y;
  l=0;
  while(1)
  {
    scanf("%d%d",&m,&n);
    if(m==0 && n==0)
      return 0;
      memset(str,'\0',sizeof(str));
      memset(str1,'\0',sizeof(str1));
    l++;
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%c",&c);
        if(c=='.'||c=='*')
        str[i][j]=c;
         else
         j=j-1;

      }
    }
    if(l>1)
     printf("\n");
    printf("Field #%d:\n",l);
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
      {
       k=0;
       x=i,y=j;
       if(str[i][j]=='*')
       {
         str1[i][j]='*';
         continue;
       }
       if((x-1)<0 || (y-1)<0)
        k=k;
      else if(str[x-1][y-1]=='*')
         k++;
       if((x-1)<0)
         k=k;
      else if(str[x-1][y]=='*')
         k++;
        if((x-1)<0)
         k=k;
      else if(str[x-1][y+1]=='*')
         k++;
       if((y-1)<0)
         k=k;
      else if(str[x][y-1]=='*')
         k++;
       if(str[x][y+1]=='*')
         k++;
       if((y-1)<0)
         k=k;
      else if(str[x+1][y-1]=='*')
         k++;
       if(str[x+1][y]=='*')
         k++;
       if(str[x+1][y+1]=='*')
         k++;
       str1[i][j]=k+'0';
      }
    }
    for(i=0;i<m;i++)
    {
     for(j=0;j<n;j++)
     {
      printf("%c",str1[i][j]);
     }
     printf("\n");
    }
  }
  return 0;
}
