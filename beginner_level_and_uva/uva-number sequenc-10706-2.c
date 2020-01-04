#include<stdio.h>
int main()
{
 int i,j,k,l;
 k=0,l=0;
 for(i=1; ;i++)
 {
  j=i;
  while(j!=0)
  {
    k=k+j%10;
    j=j/10;
    l++;
    printf("%d ",l);
    if(l==2147483647)
     return 0;
  }
 }
}
