#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    int i,j,length,k,n;
    long int sum;
    while(scanf("%s",str)!=EOF)
    {
        sum=0;
        length=strlen(str);
        for(i=0; i<length; i++)
        {
            if(str[i]>=97)
                str[i]=str[i]-'a'+1;
            else
                str[i]=str[i]-'A'+27;
            sum=sum+str[i];
        }
        k=sum/2;
        for(j=2; j<=k; j++)
        {
            if(sum%j==0)
                break;
        }
        if(j==k+1||sum==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
