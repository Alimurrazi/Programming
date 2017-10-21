#include<stdio.h>
#include<string.h>
int main()
{
 char str[10];
 char str1[10];
 str[10]="my name is";
 scanf("%s",str1);
 if (strstr(str,str1))
    printf("yes");
 else
    printf("no");
 return 0;

}
