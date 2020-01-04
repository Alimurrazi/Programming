#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,k,n;
 while(1)
 {
   scanf("%d",&n);
   j=sqrt(n);
   printf("j=%d\nj*j==%d\n",j,j*j);
   if((j*j)==n)
    printf("not\n");
   else
    printf("yes\n");
 }
}
