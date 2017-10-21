#include<stdio.h>
#include<string.h>

int main()
{
    int ara[1050];
    char str[1050];
    int i,j,n,k,l,sum;
    while(1)
    {
        sum=0;
        scanf("%s",str);
        l=strlen(str);
        for(i=0; i<l; i++)
        {
            sum=sum+str[i]-'0';
        }
        if(sum%3==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
