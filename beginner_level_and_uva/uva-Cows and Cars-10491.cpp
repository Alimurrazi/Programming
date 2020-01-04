#include<stdio.h>
int main()
{
    double i,j,k,l,m,n,show,car,cow,p1,p2,tp;
    while(scanf("%lf%lf%lf",&cow,&car,&show)==3)
    {
        n=cow+car;
        k=n-(show+1);
        p1=(car/k)*cow;
        p2=((car-1)/k)*car;
        tp=(p1+p2)/n;
        //   printf("n=%lf k=%lf p1=%lf p2=%lf tp=%lf\n",n,k,p1,p2,tp);
        printf("%0.5lf\n",tp);
    }
}

