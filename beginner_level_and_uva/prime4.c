#include<stdio.h>
#include<math.h>
int main()
{
 int n,i,j,k;
 while(1)
 {
  scanf("%d",&n);
  k=sqrt(n);
  for(i=2;i<=k;i++)
  {
    if(n%i==0)
        break;
  }
  if(i==k+1)
        printf("prime\n");
  else
    printf("divisor\n");
 }
 return 0;
}
