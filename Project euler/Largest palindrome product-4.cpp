#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,f,s,t,fo,fif,six;
    int h=0;
    for(i=100; i<=999; i++)
    {
        for(j=100; j<=999; j++)
        {
            k=i*j;

            l=k%10;
            k=k/10;

            fif=k%10;
            k=k/10;

            fo=k%10;
            k=k/10;

            t=k%10;
            k=k/10;

            s=k%10;
            k=k/10;

            f=k%10;
            k=k/10;

            if((f==l && s==fif && t==fo))
            {
                if((i*j)>h)
                    h=i*j;
            }
        }
    }
    printf("%d\n",h);
}
