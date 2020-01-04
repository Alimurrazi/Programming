#include<stdio.h>
#include<string.h>
struct gift
{
 char str[20];
 int p;
};
int main()
{
 struct gift group[15];
 char str1[20];
 int i,j,k,l,m,n,g,f=0;
 while(scanf("%d",&n)!=EOF)
 {
  for(i=0;i<n;i++)
  scanf("%s",group[i].str);
  for(i=0;i<n;i++)
   group[i].p=0;
  for(l=0;l<n;l++)
  {
  scanf("%s%d%d",str1,&g,&m);
  if(m==0)
  {
   continue;
  }
  for(i=0;i<n;i++)
  {
   if(strcmp(str1,group[i].str)==0)
   {
    k=i;
    break;
   }
  }

  while((g%m)!=0)
  {
    g=g-1;
  }
  group[k].p=(group[k].p)-g;

  g=g/m;
  for(i=0;i<m;i++)
  {
   scanf("%s",str1);
   for(j=0;j<n;j++)
   {
     if(strcmp(str1,group[j].str)==0)
     {
       group[j].p=group[j].p+g;
       break;
     }
   }
  }
  }
  if(f==1)
  printf("\n");
  for(i=0;i<n;i++)
  {
    printf("%s %d\n",group[i].str,group[i].p);
  }
  f=1;
 }
}
