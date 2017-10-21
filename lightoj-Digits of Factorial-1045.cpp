#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    double ans=0;
    for(i=1;i<=5;i++)
    {
     ans=ans+log(i*1.0);
    }
    ans=ans+1;
    printf("%lf\n",ans);
}
