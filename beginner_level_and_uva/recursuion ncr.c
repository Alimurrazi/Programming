#include<stdio.h>

int rec(int n,int r)
{
 printf("n=%d r=%d\n",n,r);
 if(r==n)
 return 1;
 if(r==1)
 return n;
 //return //(rec(n-1,r));//
 //+
return (rec(n-1,r-1));
}
int main()
{
int k=rec(5,2);
printf("%d\n",k);
}
