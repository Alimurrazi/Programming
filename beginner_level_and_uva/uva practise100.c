#include<stdio.h>
int main()
{
// int i,j,k,n=1,count=0;
 //for(i=1;i<=5;i++)
 //{n=i;
  //for(j=1;j<=1000;j++)
 // {
  // n=n-1;
  // if(n<1)
    //    break;
     // count++;
  //printf("%d \n",count);
  //}
 //}
 int i,j,n=22;
 for(i=1;i<1000;i++)
 {
  if(n%2==0)
  {
   n=n/2;
  }
  else
  {
   n=(3*n)+1;
  }
  printf("%d ",n);
  if(n<=1)
    break;
 }
 return 0;
}
