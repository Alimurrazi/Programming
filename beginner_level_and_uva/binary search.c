#include<stdio.h>
int main()
{
 int ara[15]={10,20,30,40,50,60,70,80,90,100,110};
 int start=0,end=10,mid,key=85;
 while(1)
 {
  mid=(int)((start+end)/2);
  if(key==ara[mid])
  {
   printf("%d at %d",key,mid+1);
   break;
  }
  else if(key>ara[mid])
  {
   start=mid+1;
  }
  else if(key<ara[mid])
  {
   end=mid-1;
  }
 else if(start>=end)
  {
   printf("no match");
   break;
  }
 }
 return 0;
}
