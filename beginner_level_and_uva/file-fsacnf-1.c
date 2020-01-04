#include<stdio.h>
int main()
{int ara[16];
int i,j;
 FILE *pf;
 pf=fopen("ques1.txt","r");
for(i=0;i<5;i++)
{
 fscanf(pf,"%d",&ara[i]);
}
 for(i=0;i<5;i++)
 {
  printf("%d ",ara[i]);
 }
 return 0;
}
