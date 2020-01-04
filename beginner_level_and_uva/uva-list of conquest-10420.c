#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct list
{
  char str[80];
  int n;
};
int comp(const void *c,const void *d)
{
 char *a=(char *)c;
 char *b=(char *)d;
 return strcmp(a,b);
}
int main()
{
  struct list conq[2000];
  char str1[2000][100];
  char str2[100];
  int i,j,k,l,m,n,t;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
   scanf("%s",str1[i]);
   gets(str2);
  }
  qsort(str1,i,sizeof(str1[0]),comp);
  for(i=0;i<=2000;i++)
  conq[i].n=0;
  strcpy(conq[0].str,str1[0]);
  j=0;
  for(i=0;i<t;i++)
  {
   if(strcmp(str1[i],conq[j].str)==0)
    conq[j].n+=1;
   else
   {
    j++;
    strcpy(conq[j].str,str1[i]);
    i=i-1;
   }
  }
  for(i=0;i<=j;i++)
   printf("%s %d\n",conq[i].str,conq[i].n);
}
