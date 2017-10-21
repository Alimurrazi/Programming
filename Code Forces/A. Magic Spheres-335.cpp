#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t,a,b,c,x,y,z,inc,dec;
    int ara1[10];
    int ara2[10];
    while(1)
    {
    for(i=0; i<3; i++)
        scanf("%d",&ara1[i]);
    for(i=0; i<3; i++)
        scanf("%d",&ara2[i]);
    inc=0,dec=0;
    for(i=0; i<3; i++)
    {
        if(ara1[i]>ara2[i])
            dec=dec+((ara1[i]-ara2[i])/2);
        else
            inc=inc+(ara2[i]-ara1[i]);
    }
   // inc=inc*2;
    if(dec>=inc)
        printf("Yes\n");
    else
        printf("No\n");
    }
}
