#include<bits\stdc++.h>
using namespace std;

char str[200005];

int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d",&l)==1)
    {
        scanf("%s",str);
        m=0,n=0;
        for(i=0; i<l; i++)
        {
            if(str[i]=='0')
                m++;
            else
                n++;
        }
        m=fabs(m-n);
        printf("%d\n",m);
    }
}
