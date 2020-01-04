#include<stdio.h>
int main()
{
 int n,rem,q;
 int i=0,j,temp;
 char hexa[100];
 scanf("%d",&n);
 while(n!=0){
    temp=n%16;
    if(temp<10)
        temp=temp+48;
    else
        temp=temp+55;
    hexa[i++]=temp;
    n=n/16;
 }
   for(j=i-1;j>=0;j--)
   {
    printf("%c",hexa[j]);
   }
 return 0;
}
