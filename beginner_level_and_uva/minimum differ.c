#include<stdio.h>
int main()
{
 int ara[10]={14,3,4,5,12};
 int i,j,min_differ,diff;
 min_differ=abs(ara[0]-ara[1]);
 for(i=0;i<5;i++)
 {
  diff=abs(ara[i]-ara[i+1]);
  if(diff<min_differ)
     min_differ=diff;
 }
 printf("%d ",min_differ);
 return 0;
}
