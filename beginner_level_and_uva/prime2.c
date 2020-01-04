#include<stdio.h>
int main()
{
 int n,i,j,k;
 //scanf("%d",&n);
 for(n=2;n<100;n++){
 for(i=2;i<n;i++)
 {
  if(n%i==0){
    //printf("no");
    break;
 }}
 if(i==n)
    printf("%d ",n);}

 return 0;
}
