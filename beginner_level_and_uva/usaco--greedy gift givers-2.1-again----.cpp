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
 int recieve,given;
};

int main()
{
 struct greedy gift[20];
 char str1[20];
 int i,j,k,l,m,n,money,person;

   FILE *fin  = fopen ("gift1.in", "r");
   FILE *fout = fopen ("gift1.out", "w");

 while(fscanf(fin,"%d",&n)==1)
 {

  for(i=0;i<n;i++)
  {
  fscanf(fin,"%s",gift[i].str);
  gift[i].recieve=0;
  gift[i].given=0;
  }

  while(fscanf(fin,"%s",str1)==1)
  {
    fscanf(fin,"%d%d",&money,&person);
    if(money==0 && person==0)
       break;

    for(i=0;i<n;i++)
    {
      if(strcmp(str1,gift[i].str)==0)
      {
      gift[i].given+=money;
      if(person==0)
      gift[i].recieve+=money;
      else
      gift[i].recieve+=money-(person*(money/person));
      break;
      }
    }

    for(i=0;i<person;i++)
    {
     fscanf(fin,"%s",str1);
     for(j=0;j<n;j++)
     {
      if(strcmp(str1,gift[j].str)==0)
      {
        gift[j].recieve+=money/person;
        break;
      }
     }
    }

  }

  for(i=0;i<n;i++)
  {
   fprintf(fout,"%s %d\n",gift[i].str,gift[i].recieve-gift[i].given);
  }

 }
 exit(0);
}
