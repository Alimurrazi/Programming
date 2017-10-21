#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        k=(n*(n+1))/2;
        l=0;
        for(i=0; ; i++)
        {
            m=pow(2,i);
            printf("m===%d\n",m);
            if(m>n)
                break;
            l=l+m;
        }
      //  printf("%d\n",l);
        k=k-l;
        printf("%d\n",k);
    }
}
