#include<stdio.h>
#include<string.h>
int main()
{
  char str[100000];
  int i,j,k,length;
  while(gets(str))
  {
  length=strlen(str);
  for(i=0;i<length;i++)
  {
   if(str[i]=='P'||str[i]=='p')
        printf("i");
    else if(str[i]=='O'||str[i]=='o')
        printf("u");
    else if(str[i]=='I'||str[i]=='i')
        printf("y");
    else if(str[i]=='U'||str[i]=='u')
        printf("t");
    else if(str[i]=='Y'||str[i]=='y')
        printf("r");
    else if(str[i]=='T'||str[i]=='t')
        printf("e");
    else if(str[i]=='R'||str[i]=='r')
        printf("w");
    else if(str[i]=='E'||str[i]=='e')
        printf("q");
    else if(str[i]=='L'||str[i]=='l')
        printf("j");
    else if(str[i]=='K'||str[i]=='k')
        printf("h");
    else if(str[i]=='J'||str[i]=='j')
        printf("g");
    else if(str[i]=='H'||str[i]=='h')
        printf("f");
    else if(str[i]=='G'||str[i]=='g')
        printf("d");
    else if(str[i]=='F'||str[i]=='f')
        printf("s");
    else if(str[i]=='D'||str[i]=='d')
        printf("a");
    else if(str[i]=='M'||str[i]=='m')
        printf("b");
    else if(str[i]=='N'||str[i]=='n')
        printf("v");
    else if(str[i]=='B'||str[i]=='b')
        printf("c");
    else if(str[i]=='V'||str[i]=='v')
        printf("x");
    else if(str[i]=='C'||str[i]=='c')
        printf("z");
    else if(str[i]==']')
        printf("p");
    else if(str[i]=='[')
        printf("o");
    else if(str[i]==';')
        printf("k");
    else if(str[i]=='.')
        printf("m");
    else if(str[i]==',')
        printf("n");
    else if(str[i]==' ')
        printf(" ");
    else if(str[i]=='\n')
        printf("\n");
    else if(str[i]=='/')
        printf(",");

  }
  printf("\n");
  }
  return 0;
}
