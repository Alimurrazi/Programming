#include<stdio.h>
int main()
{
  char str[100],str1[100];
  int i,j,k;
  while(1)
  {
    gets(str);
    gets(str1);
    printf("%s ? %s = %d\n",str,str1,strcmp(str,str1));
  }

}
