#include<stdio.h>
int main()
{
 FILE *pf;
 char str[12]={"SUST"};
 pf=fopen("exam.txt","r");
 //fprintf(pf,"%s",str);
 scanf(pf,"%s",str);
 printf("%s",str);
 return 0;
}
