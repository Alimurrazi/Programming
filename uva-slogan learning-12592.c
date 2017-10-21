#include<stdio.h>
#include<string.h>
struct slogan
{
  char str[120];
  char str1[120];
};
int main()
{
  char str2[120];
  struct slogan learn[500];
  int i,j,k,l,m,n;
  scanf("%d%*c",&m);
  for(i=0;i<m;i++)
  {
    gets(learn[i].str);
    gets(learn[i].str1);
  }
  scanf("%d%*c",&n);
  for(j=0;j<n;j++)
  {
    gets(str2);
    k=0;
    for(i=0;i<m;i++)
    {
      if(k==1)
        break;
     if(strcmp(str2,learn[i].str)==0)
     {
       printf("%s\n",learn[i].str1);
       k=1;
     }
    }
  }
return 0;
}
