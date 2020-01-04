#include<stdio.h>
#include<string.h>
struct home
{
  char str[25];
  int n;
};
int main()
{
 struct home work[105];
 char str1[25];
 int i,j,k,l,t,p,q,m,d,f;
 scanf("%d",&t);
 for(l=1;l<=t;l++)
 {
 scanf("%d",&m);
  for(i=0;i<m;i++)
  {
   scanf("%s%d",&work[i].str,&work[i].n);
  }
  scanf("%d%s",&d,str1);
  f=0;
  for(i=0;i<m;i++)
  {
   if(strcmp(work[i].str,str1)==0)
   {
    p=work[i].n;
    f=1;
   }
  }
  if(f==0 || p>(d+5))
  {
    printf("Case %d: Do your own homework!\n",l);
    continue;
  }
   if(p>d && p<=(d+5))
   {
     printf("Case %d: Late\n",l);
     continue;
   }
   if(p<=d)
   {
     printf("Case %d: Yesss\n",l);
     continue;
   }
 }
}
