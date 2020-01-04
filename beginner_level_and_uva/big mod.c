#include <stdio.h>

int mod(long b, long p, long m)
{
  printf("%d %d %d\n",b,p,m);
    if(p==0)
        return 1;
    if(p%2==0)
        return (mod(b,p/2,m)*mod(b,p/2,m))%m;
     else
    return (mod(b,p-1,m)*(b%m))%m;
}
int main()
{
    int b,p,m;
    while(scanf("%d %d %d",&b,&p,&m)==3){
        printf("%d\n",mod(b,p,m));
    }
    return 0;
}
