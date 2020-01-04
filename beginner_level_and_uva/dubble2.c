#include<stdio.h>
int main()
{
 int ara[10]={1,3,1,4,3,5,6};
 int i,j,n=7,temp,x;
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(ara[i]>ara[j]){
     temp=ara[i];
     ara[i]=ara[j];
     ara[j]=temp;}
  }
 }
 for(i=0;i<n;i++)
 {
  printf("%d \n",ara[i]);
 }
 i=0,j=1;
 while(i<n)
 {
  if (ara[i]==ara[j])
  {
   for(x=j;x<n-1;x++)
        ara[x]=ara[x+1];
   n--;
  }
  else
  {
   i++;
   j++;
  }
 }
 for(i=0;i<=n;i++)
 {
  printf("%d ",ara[i]);
 }
 return 0;
}
