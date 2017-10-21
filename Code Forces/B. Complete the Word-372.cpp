#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    char ara[60000];

    while(scanf("%s",ara)==1)
    {
        int  m=0,n=0;
        int ara1[50005];
        int ara2[50005];
        map<char,int>q;
        l=strlen(ara);
        for(i=0; i<l; i++)
        {
            if(ara[i]=='?')
                m++;
            else
            {
                if(q[ara[i]]==0)
                {
                    q[ara[i]]=i+1;
                    n++;
                }
                else
                {
                    //   n=n-q[ara[i]];
                    //    n=n-ara2[q[ara[i]]];
                    m=m-ara1[q[ara[i]]+1];
                    if(m<0)
                    m=0;
                    n=0;
                    for(k='A'; k<='Z'; k++)
                    {
                        char c=k;
                        if(q[c]<q[ara[i]])
                            q[c]=0;
                        else
                            n++;
                    }
                    q[ara[i]]=i+1;
                }
            }
            ara1[i+1]=m;
       //     ara2[i+1]=n;
            if((m+n)==26)
            {
                break;
            }
            //    printf("m==%d n==%d\n",m,n);
        }
        if(i==l)
        {
            printf("-1\n");
        }
        else
        {
            /*
            for(j='A'; j<='Z'; j++)
            {
                char c=j;
                if(q[c]==0)
                {
                    for(k=i; k>=(i-25); k--)
                    {
                        if(ara[k]=='?')
                        {
                            ara[k]=c;
                            break;
                        }
                    }
                }
            }
            */

            int check[30];
            int in=0;

            for(k=i; k>=(i-25); k--)
            {
                if(ara[k]!='?')
                {
                  check[in]=ara[k];
                  in++;
                }
            }
            in=0;
            for(k=i; k>=(i-25); k--)
            {
                if(ara[k]=='?')
                {
                 ara[k]=check[in];
                 in++;
                //break;
                }
            }


            //   for(j=i-25; j<=i; j++)
            //       printf("%c",ara[j]);
            for(j=0; j<l; j++)
            {
                if(ara[j]=='?')
                    ara[j]='A';
                printf("%c",ara[j]);
            }
            printf("\n");
        }
    }
}
