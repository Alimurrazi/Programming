#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int ara1[1000000];
int ara2[1000000];
char str1[2000000];
char str2[2000000];

int main()
{
    int i,j,k,l,m,n,l1,l2,a,b,p,c1,c2;
    while(scanf("%s%s",&str1,&str2)==2)
    {
        l1=strlen(str1);
        l2=strlen(str2);
        p=0,k=0;
        for(i=0; i<l1; i++)
        {
            if(str1[i]=='.')
                continue;
            k=0;
            for(j=i; j<l1; j++)
            {
                if(str1[j]=='.')
                {
                    i=j;
                    break;
                }
                k=k*10+(str1[j]-'0');
                //   printf("k==%d\n",k);
            }
            ara1[p]=k;
            p++;
        }
        //   printf("k=========%d\n",ara1[0]);
        a=p;
        p=0;
        for(i=0; i<l2; i++)
        {
            if(str2[i]=='.')
                continue;
            k=0;
            for(j=i; j<l2; j++)
            {
                if(str2[j]=='.')
                {
                    i=j;
                    break;
                }
                k=k*10+str2[j]-'0';
            }
            ara2[p]=k;
            p++;
        }
        b=p;
        k=max(a,b);
        c1=0,c2=0;
        for(i=0; i<k; i++)
        {
            //  printf("%d %d\n",ara1[i],ara2[i]);
            if(i==l1)
            {
                c2=1;
                break;
            }
            else if(i==l2)
            {
                c1=1;
                break;
            }
            else if(ara1[i]>ara2[i])
            {
                c1=1;
                break;
            }
            else if(ara2[i]>ara1[i])
            {
                c2=1;
                break;
            }
        }
        if(c1==1)
            printf("%s\n",str1);
        else
            printf("%s\n",str2);
    }
}
