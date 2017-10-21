/*
  1 1
  2 1
  2 3
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,l,m,n,t,a=0,b=0,c,d;
    double k;
    while(scanf("%d%d",&c,&d)==2)
    {
        k=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        printf("%lf\n",k);
    }
}
