#include<stdio.h>
int main()
{
 int n=89,i,j,k,flag;
 //while(1)
 //{
  flag=0;
  //scanf("%d",&n);
  for(i=2;i<n;i++)
  {
   if(n%i==0)//{
      flag=1;
    //  break;}
  }
  if(flag==1)
    printf("no");
  if(flag==0)
    printf("yes");//}
  return 0;
}
