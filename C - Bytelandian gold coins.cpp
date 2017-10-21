#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<map>
using namespace std;

map<long long , long long >q;

long long con(long long n)
{
    if(q[n]!=0)
        return q[n];
    if(n==0)
        return 0;
    long long a,b,c,i,j,k;
    a=con(n/2);
    b=con(n/3);
    c=con(n/4);
    k=a+b+c;
    q[n]=max(n,k);
    return q[n];
}

int main()
{
    long long i,j,k,l,m,n,t,a,b,c;
    while(scanf("%lld",&n)==1)
    {
        k=con(n);
        //   a=floor(n/2);
//        a=con(n,2);
        //      //  b=floor(n/3);
        //    b=con(n,3);
        //  c=floor(n/4);
        //   c=con(n,4);
        //   a=a+b+c;
        printf("%lld\n",k);
      //  q.clear();
    }
}
