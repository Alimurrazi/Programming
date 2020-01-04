#include<stdio.h>
int rec(int n ,int count)
{
 //int count=0;
 if(n<100){
  count=count+1;
 printf("%d %d\n",n,count);
 n=rec(n+1,count);}
 //if(n>100)
 else
 return 1;
}
int main()
{
 int n=1,count=0;
 rec(n,count);
 return 0;
}
