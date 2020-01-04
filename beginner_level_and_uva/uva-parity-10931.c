#include<stdio.h>
#include<math.h>
int main()
{
 char ara[200],ara1[200];
 long long i,j,k,l,m,n;
 while(1)
 {
  scanf("%lld",&m);
  if(m==0)
      return 0;
  i=0,k=0;
  while(m!=0)
  {
    ara[i]=m%2+'0';
    if(ara[i]=='1')
    k++;
    m=m/2;
    i++;
  }
  for(l=i-1,j=0;l>=0;l--,j++)
   ara1[j]=ara[l];
  ara1[j]='\0';
  printf("The parity of %s is %d (mod 2).\n",ara1,k);
 }
 return 0;
}
