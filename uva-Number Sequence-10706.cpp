#include<stdio.h>
#include<math.h>

int main()
{
    int t,m,no;
    double i,j,k,l,n;
    scanf("%d",&t);
    while(t--)
    {
     scanf("%lf",&n);
     no=0;
     while(1)
     {
      no++;
     k=-1.0+sqrt(1.0+8.0*n);
     k=k/2.0;
     m=int(k);
     if(m==k)
     break;
     else
     n=n-1;
     }
     printf("%d %lf\n",no,n);
    }
}
