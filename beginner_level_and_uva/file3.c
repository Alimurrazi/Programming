#include<stdio.h>
int main()
{
 int ara[10];
 FILE *pf;
 int i,j,k;
 pf=fopen("today.txt","r");
 for(i=0;i<5;i++)
 {
  fscanf(pf,"%d",&ara[i]);
 }
 for(i=0;i<5;i++)
 {
  printf("%d ",ara[i]);
 }
 close(pf);
 return 0;
}
