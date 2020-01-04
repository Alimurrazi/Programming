#include<stdio.h>
int main()
{
 int ara[30];
 int i,j,k;
 FILE *pf;
// pf=fopen("file-scanf.txt","w");
 //for(i=0;i<9;i++)
 //{
  //scanf("%d",&ara[i]);
 //}
 //for(i=0;i<9;i++)
 //{
  //fprintf(pf,"%d ",ara[i]);
 //}
 //fclose(pf);
pf=fopen("file-scanf.txt","r");
for(i=0;i<9;i++)
{
 fscanf(pf,"%d",&ara[i]);
}
for(i=0;i<9;i++)
{
 printf("%d ",ara[i]);
}
fclose(pf);
 return 0;
}
