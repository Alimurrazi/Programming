#include<stdio.h>
#include<string.h>

char str[1000005];
char str1[1000005];
int ara[1000005];
int l1,l2;

/*
void failure()
{
    int i,j,k,l,m,n,t;
    l1=strlen(str);
    l2=strlen(str1);
    ara[0]=0;
    j=0;
    for(i=0; i<l2; i++)
    {
        if(str1[i]==str1[j])
        {
            j++;
            ara[i]=j;
        }
        else
        {
            if(j==0)
                ara[i]=0;
            else
                j=ara[j-1];
        }
    }
 //   printf("hhhhhh\n");
    /*
    for(i=0;i<l2;i++)
    {
        printf("%d %d\n",i,ara[i]);
    }
    */
//}


void failure()
{
    int i,j,k,l,m,n,t;
    l1=strlen(str);
    l2=strlen(str1);
    ara[0]=0;
    j=0;
    for(i=1; i<l2; i++)
    {
        k=0;
        if(str1[i]==str1[j])
        {
            while(1)
            {
                if(str1[i]!=str1[j])
                {
                    ara[i-1]=k;
                    break;
                }
                k++;
                ara[i]=k;
                i++;
                j++;
            }
        }
        else
            ara[i]=0;
    }
}

int main()
{

    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(l=1; l<=t; l++)
    {
        scanf("%s%s",str,str1);
        failure();
        k=0;
        int coun=0;
        for(i=0; i<l1; i++)
        {
            for(j=k; j<l2; j++)
            {
                if(str[i]=='\0')
                    break;
                if(str[i]!=str1[j])
                {
                    break;
                }
                i++;
            }
            if(j==0)
                k=0;
            else
                k=ara[j-1];
            if(j==l2)
            {
                i=i-1;
                coun++;
            }
        }
        printf("Case %d: %d\n",l,coun);
    }
}
