#include<stdio.h>
int main()
{
 int ara[7]={19,17,16,14,12};
 int i,j,n,count=0,counte=0;
 for(j=0;j<5;j++)
 {
 n=ara[j];
 count=0,counte=0;
 //n=16;
 for(i=0;i<5;i++)
 {
  if(n==ara[i])
        continue;
  if(n>ara[i])
        count++;
  else
    counte++;
 }//}
 printf("%d %d\n",count,counte);

 if(count==counte)
    printf("%d",ara[j]);
}
 return 0;
}
