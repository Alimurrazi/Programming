#include<stdio.h>

int main()
{
    int i,j,k,l,a,b,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(b==0)
        {
            printf("1\n");
            continue;
        }
        else if((2*a*b)==0)
        {
            printf("2\n");
            continue;
        }
        else if(((3*a*a*b)-(b*b*b))==0)
        {
            printf("3\n");
            continue;
        }
        else if(((4*a*a*a*b)-(4*a*b*b*b))==0)
        {
            printf("4\n");
            continue;
        }
        else
        {
            printf("TOO COMPLICATED\n");
        }
    }
}
