#include<stdio.h>
int swap(int *p,int *q)
{int a,b;
    *p=&a;
    *q=&b;
 //int a,b;
 a=a+b-a;
 b=a+b-b;
}
int main()
{
 int a=10,b=20;
 int *p,*q;
 *p=&a,*q=&b;
 swap(a,b);
 return 0;
}
