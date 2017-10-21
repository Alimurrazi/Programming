#include<stdio.h>

int call(int i)
{
    if(i==2)
    return 0;
    call(i+1);
    printf("%d\n",i);
}

int main()
{
    int k=call(0);
    //printf("%d\n",k);
}
