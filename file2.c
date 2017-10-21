#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *pf;
 int n;
 pf=fopen("exam.txt","w");
 fscanf("%d",&n);
 fprintf(pf,"%d",n);
 fclose(pf);

 //pf=fopen("exam.txt","r");
 //fscanf(pf,"%d",&n);
  //printf("%d",n);
  //fclose(pf);
 //scanf(pf,"%d",&n);
 //printf("%d",n);
 return 0;
}
