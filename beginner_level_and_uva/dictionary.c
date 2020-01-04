#include<stdio.h>
int main()
{
  char str[10][100];
  int i=0;
  while(1)
  {
    gets(str[i]);
    gets(str[i+1]);
    if((str[i+1])>(str[i]))
    printf("%s\n",str[i+1]);
    if((str[i+1])<str[i])
    printf("%s\n",str[i]);
    i++;
  }
}
