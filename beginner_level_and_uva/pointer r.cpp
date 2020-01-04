#include<stdio.h>
int main()
{
    int i=3;
    int *j=&i;
    printf("j==%d\n",*j);
    printf("shudu j==%d\n",j);
    i=100;
    printf("j==%d\n",*j);
    printf("shudu j==%d\n",j);
}
