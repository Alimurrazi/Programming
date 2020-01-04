#include<stdio.h>
#include<math.h>

int main()
{
    char str[200005];
    int i,j,k,l,m,n,o,p;
    while(scanf("%d",&n)==1)
    {
        int no=0,n1=0;
        scanf("%s",str);
        for(i=0; i<n; i++)
        {
            if(str[i]=='0')
                no++;
            else
                n1++;
        }
        k=fabs(n1-no);
        printf("%d\n",k);
    }
}
