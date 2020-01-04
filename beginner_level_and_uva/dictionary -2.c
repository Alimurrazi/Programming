#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char ss[100000][220];
int cmp(const void *p,const void *q)
{
  char *a=(char *)p;
  char *b=(char *)q;
  return strcmp(a,b);
}
int main()
{
  int i=0,j=0,p=0;
  char c;
  memset(ss,'\0',sizeof(ss));
  while((c=getchar())!=EOF)
  {
    if(c>='A' && c<='Z')
     c=c-'A'+'a';
    if(c>='a' && c<='z')
      ss[i][j++]=c;
    else
    {
      ss[i++][j]='\0';
      j=0;
    }
  }
  qsort(ss,i,sizeof(ss[0]),cmp);
  for(p=0;p<i;p++)
   if((strcmp(ss[p],ss[p+1])) && ss[p][0]!='\0')
    printf("%s\n",ss[p]);
  return 0;
}
