#include<stdio.h>
#include<string.h>
using namespace std;

int ara[3000];
int sum;
int nol;
bool check;

bool call(int i,int w)
{
    if(i==nol+1)
        return 0;
    int p1=0,p2=0;
    if(w+ara[i]<=sum)
        p1=ara[i]+call(i+1,w+ara[i]);
    else
        p1=0;
    p2=call(i+1,w);
    if(p1==sum || p2==sum)
    {
        printf("p1===%d\n",p1);
        printf("p2===%d\n",p2);
        check=true;
        return check;
    }
    else
    {
        check=false;
        return check;
    }
}

int main()
{
    int n,i,j,div;
    char str[30000];
    scanf("%d",&n);
    scanf("%*c");
    for(i=1; i<=n; i++)
    {
        gets(str);
        int coun=1;
        int m=0;
        sum=0;
        for(j=0; ; j++)
        {
            if(str[j]=='\0')
            {
                ara[coun]=m;
                sum=sum+ara[coun];
                break;
            }
            else if(str[j]==' ')
            {
                ara[coun]=m;
                sum=sum+ara[coun];
                m=0;
                coun++;
            }
            else
            {
                m=m*10+(str[j]-'0');
            }
        }
        div=sum/2;
        check=false;
        if((div*2)!=sum)
        {
            printf("NO\n");
        }
        else
        {
            nol=coun;
            sum=div;
            //    printf("sum=====%d\n",sum);
            check=call(1,0);
            if(check==true)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}
