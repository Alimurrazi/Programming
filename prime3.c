#include<stdio.h>
#include<math.h>
int main()
{
 int n,i,j,k,flag=0;
 while(1){
 scanf("%d",&n);
 k=sqrt(n);
 for(i=2;i<=k;i++)
 {
  if(n%i==0)
  break;
 }
 if(i==k+1)
    printf("prime");
 else
    printf("not prime");}
 return 0;
}
