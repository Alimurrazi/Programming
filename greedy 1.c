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

  // FILE *fin  = fopen ("gift1.in", "r");
  // FILE *fout = fopen ("gift1.out", "w");
    freopen ("gift1.in", "r", stdin);
	freopen ("gift1.out", "w", stdout);


 while(scanf("%d",&n)==1)
 {

  k=n;

  for(i=0;i<n;i++)
  {
  scanf("%s",gift[i].str);
  gift[i].recieve=0;
  gift[i].given=0;
  }

  while(k--)
  {
    scanf("%s",str1);
    scanf("%d%d",&money,&person);

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
     scanf("%s",str1);
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
   printf("%s %d\n",gift[i].str,gift[i].recieve-gift[i].given);
  }
}
 exit(0);
}

