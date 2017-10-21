#include<stdio.h>
#define DATA1 1+3
#define DATA2 2*DATA1
int main()
{
 int i,arr[5];
 printf("%d",DATA1*0);
 for(i=0;i<5;i++)
   arr[i]=DATA2*i;
 for(i=0;i<5;i++)
    printf("arr[%d]=%d\n",i,arr[i]);
 for(i=1;i<3;i++)
 {
  ++arr[i];
  arr[i]+=arr[i-1];
 }
 for(i=0;i<5;i++)
    printf("arr[%d]=%d\n",i,arr[i]);
 return 0;
}
