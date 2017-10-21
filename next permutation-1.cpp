#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int i;
    int ara[10];
    ara[0]=4;
    ara[1]=1;
    ara[2]=3;
    ara[3]=2;
    while(next_permutation(ara,ara+4))
    {
     for(i=0;i<4;i++)
     printf("%d ",ara[i]);
     printf("\n");
    }
}
