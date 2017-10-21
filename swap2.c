#include<stdio.h>
void swap(int *p,int *q)
{
//int a,b;
    //*p=(*p+*q)-*(p);
    //*q=(*p+*q)-*(q);
//printf("%d %d",*p,*q);
*p=*p+*q;
*q=*p-*q;
*p=*p-*q;
}
int main()
{
    int a=10,b=20;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}
