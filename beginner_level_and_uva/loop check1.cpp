#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    m=0;
    for(i=1;i<=200000;i++)
    {
        for(j=i;j<=200000;j++)
        {
         m++;
        }
    }
    printf("%d\n",m);
}
