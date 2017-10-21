#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,k,l,m,n,a,b,t;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(b<a)
            swap(a,b);
        int c=1;
        for(i=0 ; ; i++)
        {
            //       printf("%d %d\n",a,b);
            if((a<2 && b<2)||(a==0 || b==0))
                break;
            if(a<b)
                c=1;
            else
                c=2;
            if(c==1)
            {
                a=a+1;
                b=b-2;
            }
            else
            {
                b=b+1;
                a=a-2;
            }
        }
        printf("%d\n",i);
        /*
        k=i-1;
        c=2;
        for(i=1 ; ; i++)
        {
            //       printf("%d %d\n",a,b);
            if(a<=0||b<=0)
                break;
            if(a<=2)
                c=1;
            else if(b<=2)
                c=2;
            if(c==1)
            {
                a=a+1;
                b=b-2;
            }
            else
            {
                b=b+1;
                a=a-2;
            }
        }
        printf("%d\n",max(k,i-1));
        */
    }
}
