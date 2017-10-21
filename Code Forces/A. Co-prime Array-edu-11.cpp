#include<stdio.h>
#include<string.h>

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int se[1005];
    int ara[1005],a,b,n,i,j,c;
    while(scanf("%d",&n)==1)
    {
        c=0;
        memset(se,0,sizeof(se));
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);
        if(n!=1)
        {
            for(i=0; i<n-1; i++)
            {
                a=ara[i],b=ara[i+1];
                if(gcd(a,b)!=1)
                {
                    c++;
                    se[i]=1;
                    /*
                    for(j=a+1; ; j++)
                    {
                        if(gcd(a,j)==1 && gcd(b,j)==1)
                        {
                            se[i]=j;
                            break;
                        }
                    }
                    */
                }
            }
        }
        /*
        else
        {
            c++;
            //  for(j=a+1; ; j++)
            {
                //    if(gcd(a,j)==1)
                {
                    se[0]=1;
                    //        break;
                }
            }
        }
        */
        printf("%d\n",c);
        for(i=0; i<n; i++)
        {
            if(i!=0)
                printf(" ");
            // if(se[i]==0)
            printf("%d",ara[i]);
            if(se[i]!=0)
            {
                printf(" %d",se[i]);
                //  i=i-1;
            }
        }
        printf("\n");
    }
}
