#include<stdio.h>
int main()
{
 int t,p,f,r,n,te,pf,so,eb;
 scanf("%d",&t);
 while(t--)
 {
  n=0,so=0;
  scanf("%d%d%d",&p,&f,&r);
  te=p+f;
  while(te>=r)
  {
   so=te/r;
   n=n+so;
   te=so+te%r;
  }
  printf("%d\n",n);
 }
  return 0;
}
