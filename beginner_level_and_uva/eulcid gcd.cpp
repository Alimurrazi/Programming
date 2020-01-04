#include<stdio.h>
#include<math.h>

long x,y;
int dp[10][10][10][10];

long gcd(long p, long q, long *x, long *y)
{
    long x1,y1; /* previous coefficients */
    long g; /* value of gcd(p,q) */
    printf("p=%ld q=%ld x=%ld y=%ld\n",p,q,x,y);
    if (q > p) return(gcd(q,p,y,x));
    if (q == 0)
    {
        *x = 1;
        *y = 0;
        return(p);
    }
     printf("p=%ld q=%ld x=%ld y=%ld\n",p,q,x,y);
    g = gcd(q, p%q, &x1, &y1);
     printf("p=%ld q=%ld x=%ld y=%ld\n",p,q,x,y);
    *x = y1;
    *y = (x1 - floor(p/q)*y1);
     printf("p=%ld q=%ld x=%ld y=%ld\n",p,q,x,y);
    return(g);
     printf("p=%ld q=%ld x=%ld y=%ld\n",p,q,x,y);
}

int main()
{
 long a,b,k;
 k=gcd(4,6,&a,&b);
 printf("%ld\n",k);
}
