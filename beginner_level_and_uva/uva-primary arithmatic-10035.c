#include<stdio.h>
int main()
{
 unsigned long long n,m,k,p,a,b;
 int carry,i,j,l,count;
 while(1)
 {
  scanf("%llu%llu",&m,&n);
  if(m==0 && n==0)
    return 0;
  carry=0,count=0;
  a=m,b=n;
  while(1)
  {
   if(a==0 && b==0)
    break;
   m=a%10;
   n=b%10;
   a=a/10;
   b=b/10;
   //printf("%llu %llu\n",a,b);
   k=(m+n)+carry;
  // printf("%llu %d\n",k,carry);
   if(k>9)
   {
        carry=1;
     count++;
  }
  else
    carry=0;
  }
  if(count==0)
    printf("No carry operation.\n");
  else if(count==1)
    printf("1 carry operation.\n");
  else
    printf("%d carry operations.\n",count);
 }
 return 0;
}
