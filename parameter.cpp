#include<stdio.h>

int funct(int i=0)
{
    printf("%d\n",i);
    i++;
    if(i==10)
        return 0;
    funct(i);
}

int main()
{
    funct(0);
}
