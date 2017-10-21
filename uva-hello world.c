#include<stdio.h>
int main()
{
 int n,i,j=0,k,l,m;
 while(1)
 {
  k=1,i=0;
  j++;
  scanf("%d",&n);
  if(n<0)
    return 0;
  while(1){
  if(n==1)
  {
    i=0;
    break;
  }
  k=k*2;
  i++;
  if(k>=n)
        break;}

 printf("Case %d: %d\n",j,i);}
 return 0;
}
