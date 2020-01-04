#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    long long i,j,k,l,m,n,big,small;
    char temp;
    while(scanf("%s",str)==1)
    {
        big=0,small=0;
        l=strlen(str);
        sort(str,str+l);

        for(i=l-1; i>=0; i--)
        {
            big=big*10+(str[i]-'0');
        }
        i=0;
        while(str[i]=='0')
        {
            if(str[i]!='0')
                break;
            i++;
        }
        temp=str[i];
        str[i]=str[0];
        str[0]=temp;

        for(i=0; i<l; i++)
        {
            small=small*10+(str[i]-'0');
        }
        k=big-small;

        printf("%lld - %lld = %lld = 9 * %lld\n",big,small,k,k/9);
    }
}
