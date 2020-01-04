#include<stdio.h>
 void swap(int a,int b,int *p,int *q)
 {
   //*p=&a;
   //*q=&b;
  *p=(a*b)/a;
  *q=(a*b)/b;
  printf("a=%d\nb=%d",*p,*q);
 }
 int main()
 {
  int a=10,b=20;
  int ssss,wer;
  swap(a,b,&ssss,&wer);
  return 0;
 }
