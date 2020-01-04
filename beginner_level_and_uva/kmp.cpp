#include<stdio.h>
#include<string.h>

char str[1000005];
char str1[1000005];
int ara[1000005];
int l1,l2;

void failure()
{
    int i,j,k,l,m,n,t;
    l1=strlen(str);
    l2=strlen(str1);
    ara[0]=0;
    j=0;
    k=0;
    for(i=1; i<l2; )
    {
        if(str1[i]==str1[j])
        {
            j=j+1;
            ara[i++]=j;
        }
        else
        {
            if(j==0)
            {
                ara[i++]=0;
            }
            else
            {
           //     printf("i=====%d j=====%d man===%d\n",i,j,ara[j-1]);
                j=ara[j-1];
            }
        }
    }
}

int main()
{
    int i,j,k,l,m,n,o,p,t;
    while(1)
    {
        scanf("%s",str1);
        failure();
        for(i=0;i<l2;i++)
        {
            printf("%d %d\n",i,ara[i]);
        }
    }
}
