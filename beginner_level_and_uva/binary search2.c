#include<stdio.h>
int main()
{
    int ara[10]={1,2,3,4,5,6,7,8,9,10};
    int start=0,end=10,key=1,mid;
    while(1)
    {
      mid=(start+end)/2;
      if(ara[mid]==key)
      {
        printf("%d is at %d",key,mid);
        break;
      }
      if(ara[mid]>key)
        end=mid-1;
      if(ara[mid]<key)
        start=mid+1;
    }
}
