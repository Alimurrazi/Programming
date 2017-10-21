#include<stdio.h>
int main()
{
  int ara[100];
  int i,j,k,l,m,n;
  ara[0]=ara[1]=ara[2]=ara[3]=1;
  i=0;
  do
  {
    i++;
  }
  while(ara[i]==1);
  printf("%d\n",i);
}
