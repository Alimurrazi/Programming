/*
ID: alimurr2
PROG: gift1
LANG: C++
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct greedy
{
  char str[20];
  int n;
};
int main()
{
  struct greedy gift[20];
  char str1[20];
  int i,j,k,l,m,n,a,b;

   FILE *fin  = fopen ("gift1.in", "r");
   FILE *fout = fopen ("gift1.out", "w");

  //while((fscanf(fin,"%s%s",str,str1))==2)
  while(fscanf(fin,"%d",&n)==1)
  {
   for(i=0;i<n;i++)
   fscanf(fin,"%s",gift[i].str);
   for(i=0;i<n;i++)
   gift[i].n=0;
   while(fscanf(fin,"%s",str1)==1)
   {
     fscanf(fin,"%d%d",&a,&b);
     if(a==0 && b==0)
      break;
    if(b!=0)
    {
    k=a/b;
    l=a-(k*b);
    }
    else
    {
     l=a;
     a=0;
    }
    for(i=0;i<n;i++)
    {
      if((strcmp(str1,gift[i].str))==0)
       gift[i].n=(gift[i].n-a)+l;
    }
    for(i=0;i<b;i++)
    {
     fscanf(fin,"%s",str1);
     for(j=0;j<n;j++)
     {
      if((strcmp(str1,gift[j].str))==0)
      {
        gift[j].n=gift[j].n+k;
        break;
     }
    }
   }
   }
   for(i=0;i<n;i++)
   fprintf(fout,"%s %d\n",gift[i].str,gift[i].n);
  }
  exit(0);
}
