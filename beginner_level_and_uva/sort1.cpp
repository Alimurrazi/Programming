#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  int i;
  //int ara[5]={3,1,2,4,5};
  char ara[50]={"31245"};
  sort(ara,ara+5);
  for(i=0;i<5;i++)
  printf("%c\n",ara[i]);
}
