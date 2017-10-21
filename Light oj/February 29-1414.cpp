#include<stdio.h>
#include<string.h>

int moncon(char str[100])
{
    if(strcmp(str,"January")==0)
        return 1;
    if(strcmp(str,"February")==0)
        return 2;
    if(strcmp(str,"March")==0)
        return 3;
    if(strcmp(str,"April")==0)
        return 4;
    if(strcmp(str,"May")==0)
        return 5;
    if(strcmp(str,"June")==0)
        return 6;
    if(strcmp(str,"July")==0)
        return 7;
    if(strcmp(str,"August")==0)
        return 8;
    if(strcmp(str,"September")==0)
        return 9;
    if(strcmp(str,"October")==0)
        return 10;
    if(strcmp(str,"November")==0)
        return 11;
    if(strcmp(str,"December")==0)
        return 12;
}

int main()
{
    int i,j,k,l,m,n,t,fd,fm,fy,ld,lm,ly,tfd,tfm,tfy,tld,tlm,tly,how;
    char str[100];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        how=0;
        scanf("%s%d,%d",str,&fd,&fy);
        fm=moncon(str);
        scanf("%s%d,%d",str,&ld,&ly);
        lm=moncon(str);

        k=fy%4;
        k=(4-k);
        tfy=fy+k;
        k=ly%4;
        tly=ly-k;
        how=(tly-tfy)/4;
        how=how+1;

        k=fy%100;
        k=(100-k);
        tfy=fy+k;
        k=ly%100;
        tly=ly-k;
        k=(tly-tfy)/100;
        k=k+1;
        how=how-k;

        k=fy%400;
        k=400-k;
        tfy=fy+k;
        k=ly%400;
        tly=ly-k;
        k=(tly-tfy)/400;
        k=k+1;
        how=how+k;

        if(fy%4==0 && fy%100!=0 && fm<=2)
            how++;
        if(fy%4==0 && fy%100==0 && fy%400==0 && fm<=2)
            how++;

        if(ly%4==0 && ly%100!=0 && (lm==1||(lm==2 && ld<29)))
            how=how-1;
        if(ly%4==0 && ly%100==0 && ly%400==0 && (lm==1 || (lm==2 && ld<29)))
            how=how-1;
        printf("Case %d: %d\n",i,how);
    }
}
