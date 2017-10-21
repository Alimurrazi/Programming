#include<stdio.h>
#include<string.h>

char str[100][100];
int k,r,c;

void floodfill(int i,int j)
{
  if(str[i][j]=='W' && i>-1 && j>-1)
  {
    k++;
    printf("(%d%d)\n",i,j);
    str[i][j]='L';
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
  char str1[100];
  int i,j,l=0,m,n,t;
  scanf("%d%*c%*c",&t);
 // getchar();
  while(t--)
  {
  for(i=0; ;i++)
  {

   if(l==1)
   {
    strcpy(str[i],str1);
    l=0;
    i=i+1;
   // continue;
   }

  gets(str1);
  if(str1[0]>='0' && str1[0]<='9')
  break;
  strcpy(str[i],str1);

  }
   r=i;
   c=strlen(str[0]);

   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    printf("%c",str[i][j]);
    printf("\n");
   }

  {
   while(1)
   {
    k=0;
    printf("%s",str1);
    sscanf(str1,"%d %d",&i,&j);
    {
      floodfill(i,j);
      printf("%d\n",k);
      k=0;
    }

    scanf("%s",str1);
    l=0;

    if(str1[0]=='L'||str1[0]=='W')
    {
     l=1;
     i=0;
     memset(str1,'\0',sizeof(str1));
     break;
    }

   }
  }
  }
}
