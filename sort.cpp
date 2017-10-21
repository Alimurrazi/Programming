#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int ara[30100],i,j,k,l,t,n,differ,mid;
int main()
{
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&ara[i]);
 sort(ara,ara+i);
 mid=ara[(n/2)];
 differ=0;
 for(i=0;i<n;i++)
 {
  differ=differ+fabs(mid-ara[i]);
 }
 printf("%d\n",differ);
 }
 return 0;
}
