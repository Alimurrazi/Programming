#include<stdio.h>
int main()
{
 int ara[13]={1,4,2,2,5,1};
 int i,j;
 for(i=0;i<6;i++)
 {
  for(j=i+1;j<=6;j++)
  {
   if (ara[i]==ara[j])
    printf("%d ",ara[i]);
    //    continue;
  }
  //printf(" %d",ara[i]);
}
 return 0;
}
