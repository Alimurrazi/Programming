#include<stdio.h>
int main()
{
 int i,j,n;
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
   if(n%i==0){
      printf("no");
      break;}
 }
 if(i==n)
    printf("yes");
 return 0;
}
