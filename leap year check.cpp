#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,f,how;
    while(1)
    {
        how=0;
        scanf("%d%d",&f,&l);
        for(i=f; i<=l; i++)
        {
            if(i%4==0 && i%100!=0)
            {
                how++;
            }
            if(i%4==0 && i%100==0 && i%400==0)
            {
                how++;
            }
        }
        printf("how==%d\n",how);
    }
}
