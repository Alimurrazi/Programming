#include<stdio.h>
#include<math.h>

int main()
{
    long long a,b,c,d,l,k,coun,i;
    while(1)
    {
     scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l);
     if(a==0 && b==0 && c==0 && d==0 && l==0)
     return 0;
     for(i=1;i<=10;i++)
     {

     }
     coun=0;
     for(i=0;i<=l;i++)
     {
      k=(a*pow(i,2))+b*i+c;
     // printf("k===%lld\n",k);
      if(k%d==0)
      coun++;
     }
     printf("%lld\n",coun);
    }
}
