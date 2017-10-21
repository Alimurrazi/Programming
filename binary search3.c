#include<stdio.h>
int main()
{
  int ara[100]={1,2,3,4,5,6,7,8,9,10};
  int low,high,mid,key;
  while(1)
  {
    scanf("%d",&key);
   // printf("kk");
    low=0,high=10;
    while(1)
    {
      mid=(int)((low+high)/2);
      printf("%d\n",mid);
      if(ara[mid]==key)
      {
        printf("found at %d\n",mid);
        break;
      }
      if(ara[mid]>key)
        high=mid-1;
      if(ara[mid]<key)
        low=mid+1;
      if(low>=high)
      {
        printf("not found\n");
        break;
      }
    }
  }
}
