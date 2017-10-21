#include<stdio.h>
int main()
{
  int i,j,n,k;
  while(scanf("%d",&n)==1)
  {
    char str[10000]={"11"};
    while(1)
    {
     i=0,k=0;
    while(str[i])
    {
     k=k*10+str[i]-'0';
     k=k%n;
     i++;
    }
    if(k==0)
    {
       printf("%d\n",i);
        break;
    }
    str[i]='1';
    str[i+1]='\0';
  }
}
return 0;
}
