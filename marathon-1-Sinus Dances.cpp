#include<stdio.h>
#include<string.h>

char str[10]="sin";

void an(int n)
{
    int i,j,k,l,m,brac=0;
    for(i=1; i<=n; i++)
    {
        printf("%s",str);
        printf("(");
        brac++;
        printf("%d",i);
        if(i==n)
        {
            for(j=0; j<brac; j++)
            {
                printf(")");
            }
            break;
        }
        if(i%2==0)
            printf("+");
        else
            printf("-");
    }
}

void sn(int n)
{
    int i,j,k,l,m;
    for(i=1;i<n;i++)
    printf("(");
    k=n;
    for(i=1;i<=n-1;i++)
    {
     an(i);
     printf("+");
     printf("%d",k--);
     printf(")");
    }
    an(n);
    printf("+1\n");
}

int main()
{
   int i,j,k,l,m,n;
   while(scanf("%d",&n)==1)
   {
    sn(n);
   }
}
