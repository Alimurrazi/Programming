#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *fb;
 char str[12];
fb=fopen("new13.txt","r");
//fprintf(fb,"this is");
fscanf(fb,"%s",str);
printf("%s",str);
return 0;
}
