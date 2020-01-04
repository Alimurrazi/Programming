#include<stdio.h>
int main()
{
 int i,j,k;
 char ch='g';
 if(ch>='a'&&ch<='z')
  ch=(ch+'A'-'a');
 printf("%c",ch);
 return 0;
}
