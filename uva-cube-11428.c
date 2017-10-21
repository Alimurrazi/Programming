#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,k,l,n,m;
 while(scanf("%d",&n)==1)
 {
   if(n==0)
     return 0;
     k=0;
   for(i=1;i<=60;i++)
   {
     if(k==1)
        break;
     for(j=0;j<i;j++)
     {
       if((i*i*i-j*j*j)==n)
       {
        printf("%d %d\n",i,j);
        k=1;
        break;
       }
     }
   }
   if(i>60)
       printf("No solution\n");
 }
 return 0;
}
