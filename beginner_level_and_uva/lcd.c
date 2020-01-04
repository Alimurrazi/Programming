#include<stdio.h>
int main()
{
unsigned long long i,j,k=0,n,l,c=0,count=1;
  k=2;
while(1)
{
  c=0;
  n=k;
while(n!=1)
{
 if(n%2==0)
 {
   n=n/2;
   continue;
 }
else if(n%3==0)
 {
  n=n/3;
  continue;
 }
else if(n%5==0)
 {
  n=n/5;
  continue;
 }
 else
 {
  c=1;
   break;
 }
 }
   if(c==0)
   {
    count++;
   }
   if(count==1500){
    printf("%llu\n",k);
    break;}
   k++;
    }
 return 0;
}
