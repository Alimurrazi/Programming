#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
long long power(long long a,long long b,long long c);
int main()
{
   // FILE *fin=fopen("calc.in");
    //FILE *fout=fopen("calc.out");
    long long n,m;
  //  while(fscanf(fin,"%lld %lld",&n,&m)==2)
  while(scanf("%d %d",&n,&m)==2)
    {

    long long k=n;
        n=power(2,n,m);
        cout<<n<<endl;
        n=power(2,n,m);
        cout<<n<<endl;
        n=(n+k)%m;
        //fprintf(fout,"%lld\n",n);
        cout<<n<<endl;
    }
        return 0;
}

/*This function calculates (a^b)%MOD */
long long power(long long a, long long b, long long MOD) {
long long x = 1, y = a;
    while(b > 0)
     {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}
/*int modInverse(int a, int m)
{
    return pow(a,m-2,m);
}*/
