#include<stdio.h>
int main()
{
  char s[150],s1[150];
  int i,ln;

  scanf("%s%s",s,s1);

  for(ln=0; s[ln]!='\0'; ln++)
    s[ln]= ' ';
    s[ln+1]=' ';

  for(i=0;s1[i]!='\0';i++)
     s[ln+i]=s1[i];

    s[ln+i]=s1[i];


    printf("%s",s);

    return 0;

}
