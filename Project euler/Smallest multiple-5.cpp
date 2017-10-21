#include<stdio.h>
#include<math.h>
int main()
{
    int i=5,k,j;
    k=232792560;
    for(i=2; i<=20; i++)
    {
        j=k%i;
        printf("%d %d\n",i,j);
    }
}
