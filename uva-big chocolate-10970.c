#include<stdio.h>
int main()
{
 long n,m,k;
 while(scanf("%ld%ld",&n,&m)!=EOF)
 {
  k=(m*n)-1;
  printf("%ld\n",k);
 }
 return 0;
}
