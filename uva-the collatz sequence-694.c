#include<stdio.h>
long int recur(long int n,long int l,long int i)
{
  if(n==1)
     return i+1;
  if(n>l)
      return i;
     i++;
  if(n%2==0)
    return recur(n/2,l,i);
  else
    return recur((3*n)+1,l,i);
}
int main()
{
  long i=0,l,n,j=0;
  while(scanf("%ld %ld",&n,&l)==2)
  {
    i=0;
    if(n<0 && l<0)
        return 0;
   j++;
  printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",j,n,l,recur(n,l,i));
 // printf("%ld\n",recur(n,l,i));
  }
}
