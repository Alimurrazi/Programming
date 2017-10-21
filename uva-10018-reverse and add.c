#include<stdio.h>
int main()
{
 long long a,b,n,m=0,c=0,s=0,count=0,k,i;
 while(scanf("%lld",&k)==1)
 {
 for(i=0;i<k;i++)
 {
  scanf("%lld",&n);
  count=0;
 while(1)
 {
  s=0,m=n;
 while(n!=0)
 {
  s=s*10+n%10;
  n=n/10;
 }
 if(s==m){
    printf("%lld %lld\n",count,s);
    break;
    }
 count++;
 s=s+m;
 n=s;
 }
 }
 }
 return 0;
}
