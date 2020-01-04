#include<stdio.h>
#include<math.h>

int main()
{
    double i,j,k,l,m,n,a,b,t;
    k=pow(2,100);
    printf("k==%lf\n",k);
    scanf("%lf",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf",&n,&a,&l);
        b=(l-1);
        k=a*(pow(1-a,b));
        // printf("k===%lf\n",k);
        m=1-pow(1-a,n);
        //  printf("m===%lf\n",m);
        if(k==0 || m==0)
            k=0;
        else
            k=k/m;
        printf("%0.4lf\n",k);
    }
}
