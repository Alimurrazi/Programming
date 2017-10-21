#include<stdio.h>
#include<conio.h>
void fibonacci(int n)
{
 int ara[120];
int a=0,b=1,c,i,j;
int check;
 for(i=0;i<20;i++)
 {
  ara[i]=a;
  c=a+b;
  a=b;
  b=c;
 }
 for(i=0;i<20;i++)
 {
  if(ara[i]==n){
      check=1;
      break;}
   else
        check=0;
 }
 if(check==1)
    printf("yes fibonacci\n");
 else
    printf("not fibonacci\n");
}
void prime(int n)
{
 int i;
 for(i=2;i<n;i++)
 {
  if(n%i==0){
 //   printf("not prime\n");
  break;}}
  if(i==n)
    printf("yes prime\n");
  else
    printf("not prime\n");
 }
 int main()
 {
  int n;
  while(scanf("%d",&n)!=EOF)
{
  fibonacci(n);
  //printf("\n");
  prime(n);
  printf("\n");
  }
  return 0;
 }

