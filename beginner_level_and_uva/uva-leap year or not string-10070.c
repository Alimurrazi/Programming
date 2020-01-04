#include<stdio.h>
#include<string.h>
int i=0,j=0,k=0,length=0,l=0,m=0,n=0,p=0,q=0;
int div4(char str[10000],int length)
{
    k=0;
    for(i=0; i<length; i++)
    {
        k=k*10+str[i]-'0';
        k=k%4;
    }
    return k;
}
int div100(char str[10000],int length)
{
    l=0;
    for(i=0; i<length; i++)
    {
        l=l*10+str[i]-'0';
        l=l%100;
    }
    return l;
}
int div400(char str[10000],int length)
{
    m=0;
    for(i=0; i<length; i++)
    {
        m=m*10+str[i]-'0';
        m=m%400;
    }
    return m;
}
int div15(char str[10000],int length)
{
    n=0;
    for(i=0; i<length; i++)
    {
        n=n*10+str[i]-'0';
        n=n%15;
    }
    return n;
}
int div55(char str[10000],int length)
{
    p=0;
    for(i=0; i<length; i++)
    {
        p=p*10+str[i]-'0';
        p=p%55;
    }
    return p;
}
int main()
{
    char str[10000];
    int key=0,c=0;
    while(scanf("%s",str)!=EOF)
    {
        c++;
        int length=strlen(str);
        if(c>=2)
        {
            printf("\n");
        }
        div4(str,length);
        div100(str,length);
        div400(str,length);
        div15(str,length);
        div55(str,length);
        if(k!=0)
            key=0;
        if(k==0)
            key=1;
        if(l==0 && m==0)
            key=1;
        if(l==0 && m!=0)
            key=0;
        if(key==1)
        {
            printf("This is leap year.\n");
            if(n==0)
                printf("This is huluculu festival year.\n");
            if(p==0)
                printf("This is bulukulu festival year.\n");
        }
        else
        {
            if(n==0)
                printf("This is huluculu festival year.\n");
            else
                printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
