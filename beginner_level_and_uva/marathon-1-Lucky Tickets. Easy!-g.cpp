#include<stdio.h>
int main()
{
    int ara[100];
    ara[0]=0;
    ara[2]=10;
    ara[4]=670;
    ara[6]=55252;
    ara[8]=4816030;
    int i,j,k,l,n,fs=0,ss=0,m,coun=0;
    /*
    for(i=00000000; i<=99999999; i++)
    {
        m=i,fs=0,ss=0;
        for(j=1; j<=4; j++)
        {
            fs=fs+m%10;
            m=m/10;
        }
        for(j=1; j<=4; j++)
        {
            ss=ss+m%10;
            m=m/10;
        }
        if(fs==ss)
            coun++;
    }
    printf("%d\n",coun);
    */
    while(scanf("%d",&n)==1)
    {
     printf("%d\n",ara[n]);
    }
}
