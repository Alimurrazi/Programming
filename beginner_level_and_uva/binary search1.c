#include<stdio.h>
int main()
{
 int ara[10]={1,2,3,4,5,6,7,8,9,10};
 int start=0,mid,key=0,end=9,i;
 while(1)
 {
  mid=(int)((start+end)/2);
  if(ara[mid]==key)
  {
   printf("%d at %d",key,mid);
    break;
  }
 else if(key<ara[mid])
  {
   end=mid-1;
  }
 else if(key>ara[mid])
 {
  start=mid+1;
 }
 if(start>end)
 {
   printf("%d is not here",key);
    break;
 }
 }
 return 0;
}
