#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char ss[1000010][220];
int cmp_string(const void *_a,const void *_b)
{
  char *a=(char *)a;
  char *b=(char *)b;
  return strcmp(a,b);
}
int main()
{
  int p,q,i;
  char c;
  p=q=0;
  memset(ss,'\0',sizeof(ss));
  while((c=getchar( ) )!=EOF)
  {
    if(c>='A' && c<='Z')
      c=c-'A'+'a';
    if(c>='a' && c<='z')
      ss[p][q++]=c;
    else
    {
      ss[p++][q]='\0';
      q=0;
    }
  }
 qsort(ss,p,sizeof(ss[0]),cmp_string);
 for(i=0;i<p;i++)
  if((strcmp(ss[i],ss[i+1]))&&ss[i][0]!='\0')
    printf("%s\n",ss[i]);
 return 0;
}
