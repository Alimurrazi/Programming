#include<stdio.h>
int main()
{
 int ara[4]={1,2,1,3};
 int i=0,j,k,count;
 for(i=0;i<4;i++)
 {
  count=1;
  for(j=i+1;j<4;j++)
  {
  // for(k=i;k=0;k--){
   //if(ara[i]==ara[k])
     //  continue;
   if(ara[i]==ara[j])
    count++;
}
//for(k=i;k>=0;k--){
  //    if(ara[k]==ara[i])
    // continue;
  printf("%d==%d\n",ara[i],count);
 }
 return 0;
}
