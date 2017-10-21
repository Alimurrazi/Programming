#include<stdio.h>
int input(int a,int b)
{
 scanf("%d%d",&a,&b);
 return a,b;
}
//int sum(int a,int b)
//{
 //int sum;
 //input(a,b);
// sum=a+b;
 //printf("%d",sum);
 //return sum;
//}
int main()
{
 int a,b;
 input(a,b);
 printf("%d %d",a,b);
 return 0;
}
