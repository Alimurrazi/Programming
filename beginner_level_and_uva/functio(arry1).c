#include<stdio.h>
int abc(int arr[5])
{
 printf("in abc:%d ",arr[2]);
 //return arr[2];
}
int main()
{
 int arr1[5]={1,2,3,4};
 printf("in main:%d ",arr1[2]);
 abc(arr1);
 return 0;
}
