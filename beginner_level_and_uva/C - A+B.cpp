#include<stdio.h>
#include<math.h>
#include<string.h>

char a[100];
char b[100];
int sa,sb;

int basea()
{
    int i=0,j,k,l,high=0;
    while(a[i])
    {
        if((a[i]-'0')>high)
            high=a[i]-'0';
        i++;
    }
    sa=high+1;
}

int baseb()
{
    int i=0,j,k,l,high=0;
    while(b[i])
    {
        if((b[i]-'0')>high)
            high=b[i]-'0';
        i++;
    }
    sb=high+1;
}

int main()
{

    int i,j,k,l,m,n,q,t,g;
    while(scanf("%d",&n)==1)
    {
        for(g=0; g<n; g++)
        {
            scanf("%s%s",a,b);
            basea();
            baseb();
        m=900000000;

        for(i=sa; i<=10; i++)
        {
            j=0,l=strlen(a)-1,k=0;
            while(a[j])
            {
                k=k+(a[j]-'0')*pow(i,l);
                j++;
                l--;
            }
            if(k<m)
                m=k;
        }

        q=900000000;
        for(i=sb; i<=10; i++)
        {
            j=0,l=strlen(b)-1,k=0;
            while(b[j])
            {
                k=k+(b[j]-'0')*pow(i,l);
                j++;
                l--;
            }
            if(k<q)
                q=k;
        }
        printf("%d\n",m+q);
    }
    }
}
