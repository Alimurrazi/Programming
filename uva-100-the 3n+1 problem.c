#include<stdio.h>
int main()
{
    long long int ara[10500];
    long long int a,b,m,k,temp;
    long long n,i,j,length,max;
    while(scanf("%lld%lld",&a,&b)==2){
     m=a,k=b;
     if(m>k)
     {
      temp=m;
      m=k;
      k=temp;
     }
     max=0;
    for(i=m; i<=k; i++)
    {
        n=i;
        length=0;
        while(1)
        {
            length++;
            if(n==1)
                break;

            if(n&1)
            {
                n=(3*n)+1;
            }
            else
            {
                n=n/2;
            }
        }
        if(length>=max)
            max=length;
    }
    printf("%lld %lld %lld\n",a,b,max);}
    return 0;
}
