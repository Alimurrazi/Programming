#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *pf;
 pf=fopen("new.txt","a");
fprintf(pf,"this is file");
 return 0;
}
