#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int ara[10],ara1[10]= {12,00};
    int i,j,k,l,n,m,temp,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        if(strcmp(str,"12:00")==0)
        {
            printf("12:00\n");
            continue;
        }
        i=0,j=0;
        while(str[i])
        {
            ara[j]=0;
            while(str[i] && str[i]!=':')
            {
                ara[j]=ara[j]*10+str[i]-48;
                i++;
            }
            while(str[i]==':')
            {
                i++;
                j++;
            }
        }
        temp=0;
        if(ara[1]>ara1[1])
        {
            k=(ara1[1]+60)-ara[1];
            temp=1;
        }
        else
            k=(ara1[1]-ara[1]);
        l=(ara1[0]-(ara[0]+temp));
        if(ara[0]==12)
            printf("11");
        else if(ara[0]==11 && ara[1]==0)
            printf("01");
        else if(ara[0]==11 && ara[1]>0 )
            printf("12");
        else if((ara[0]!=12 && ara[0]!=11) && l/10==0)
            printf("0%d",l);
        else
            printf("%d",l);
        if(k/10==0)
            printf(":0%d",k);
        else
            printf(":%d",k);
        printf("\n");
    }
    return 0;
}
