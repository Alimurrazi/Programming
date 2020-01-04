#include<stdio.h>
int main()
{
 long i,j,k,l=0,m,n,r;
 while(1)
 {
   scanf("%ld%ld",&r,&n);
   if(r==0 && n==0)
    return 0;
   l++;
   k=n;
   for(i=1;i<=26;i++)
   {
    if(k>=r)
    {
     printf("Case %ld: 0\n",l);
     break;
    }
   k=k+i*n;
   if(k>=r)
   {
    printf("Case %ld: %ld\n",l,i);
    break;
   }
   k=n;
   }
   if(i>26)
    printf("Case %ld: impossible\n",l);
 }
}
