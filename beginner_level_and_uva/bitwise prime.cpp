#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;

int prime[110/32];

int setbit(int n,int position)
{
    n=n|(1 << position);
    return n;
}

bool checkbit(int n,int position)
{
    return n & (1 << position);
}

int main()
{
    int i,j,k,l,m,n,t;
    /*
    for(i=0;i<5;i++)
    prime[i/32]=i;
    for(i=0;i<5;i++)
    printf("%d\n",prime[i/32]);
    */
    prime[0]=setbit(prime[0],0);
    prime[0]=setbit(prime[0],0);
    n=sqrt(105);
    for(i=4; i<=105; i+=2)
        prime[i/32]=setbit(prime[i/32],i%32);
    for(i=3; i<=n; i+=2)
    {
        if(!checkbit(prime[i/32],i%32))
        {
            for(j=i+i; j<=105; j+=i)
                prime[j/32]=setbit(prime[j/32],j%32);
        }
    }
    for(i=2; i<=100; i++)
    {
        if(!checkbit(prime[i/32],i%32))
            printf("%d\n",i);
    }
}
