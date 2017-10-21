#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *pf;
 char str[20];
 pf=fopen("new123.txt","a");
//fprintf(pf,"wwe is very popular");
//fscanf(pf,"%s",str);
fprintf(pf,"popular");

 return 0;
}
