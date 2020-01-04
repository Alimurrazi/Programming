#include<stdio.h>
#include<math.h>
int main()
{
  int i,j,k,l,n;
  printf("PERFECTION OUTPUT\n");
  while(1)
  {
   scanf("%d",&n);
   if(n==0)
   {
    printf("END OF OUTPUT\n");
    return 0;
   }
   k=0;
  for(i=1;i<n;i++)
  {
   if(n%i==0)
    k=k+i;
  }
 // if(k>=0 && k<=9)
  //  printf("    ");
 // if(k>=10 && k<=99)
   // printf("   ");
  //if(k>=100 && k<=999)
   // printf("  ");
  //if(k>=1000 && k<=9999)
   // printf(" ");
  if(k==n)
    printf("%5d  PERFECT\n",n);
 else if(k<n)
    printf("%5d  DEFICIENT\n",n);
  if(k>n)
    printf("%5d  ABUNDANT\n",n);
  }
  return 0;
}
