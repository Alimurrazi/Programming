#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t,a,b,c;
    for(i=1;i<=1000000000;i++)
    {

    }
    return 0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
     scanf("%d%d%d",&a,&b,&c);
     k=0;
     if(a<=(b+c) && b<=(a+c) && c<=(a+b))
      k=1;
     if(k==1)
        printf("Yes\n");
     else
        printf("No\n");
    }
}
