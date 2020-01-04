#include<stdio.h>
#include<stack>
#include<math.h>
using namespace std;
int main()
{
   // double stor[1000];
    stack<double>stor;
    double m,n,x,y,k;
    int i=0,j;
    while(scanf("%lf",&n)==1)
    {
     k=sqrt(n);
     stor.push(k);
    }
    while(!stor.empty())
    {
    k=stor.top();
    printf("%.04lf\n",k);
    stor.pop();
    }
    stor.clear();
}
