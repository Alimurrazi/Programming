#include<stdio.h>
int j;

int junct(int n)
{
    return j=n*2;
}

int main()
{
    int i,k,l;
    i=1,j=5;
    if(i==1 || j==junct(1))
    {
    printf("hoicche\n");
    printf("%d\n",j);
    }
}
