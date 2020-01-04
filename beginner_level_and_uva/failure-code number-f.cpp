#include<stdio.h>
#include<string.h>
int main()
{
  char str[200][100];
  int i,j,k,l,m,n,t;
  scanf("%d%*c",&t);
  j=0;
  while(t--)
  {
    while(gets(str[j++]))
    {
     if(str[j-1][0]=='\0')
       break;
    }
    k=j-2;
    j=0;
    i=0;
    while(j<=k)
    {
    while(str[j][i])
    {
      if(str[j][i]=='3')
       printf("E");
      else if(str[j][i]=='0')
       printf("O");
       else if(str[j][i]=='1')
       printf("I");
        else if(str[j][i]=='4')
       printf("A");
        else if(str[j][i]=='9')
       printf("P");
        else if(str[j][i]=='8')
       printf("B");
        else if(str[j][i]=='5')
       printf("S");
        else if(str[j][i]=='7')
       printf("T");
        else if(str[j][i]=='2')
       printf("Z");
        else if(str[j][i]=='6')
       printf("G");
        else
       printf("%c",str[j][i]);
      i++;
    }
   printf("\n");
   j++;
   i=0;
  }
  if(t>0)
  {
  printf("\n");
  j=0;
  }
}
}
